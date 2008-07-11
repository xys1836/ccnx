#include <ccn/coding.h>

#define ARRAY_N(arr) (sizeof(arr)/sizeof(arr[0]))
static const struct ccn_dict_entry ccn_tagdict[] = {
    {CCN_DTAG_Name, "Name"},
    {CCN_DTAG_Component, "Component"},
    {CCN_DTAG_Certificate, "Certificate"},
    {CCN_DTAG_Collection, "Collection"},
    {CCN_DTAG_CompleteName, "CompleteName"},
    {CCN_DTAG_Content, "Content"},
    {CCN_DTAG_ContentAuthenticator, "ContentAuthenticator"},
    {CCN_DTAG_ContentDigest, "ContentDigest"},
    {CCN_DTAG_ContentHash, "ContentHash"},
    {CCN_DTAG_ContentObject, "ContentObject"},
    {CCN_DTAG_Count, "Count"},
    {CCN_DTAG_Header, "Header"},
    {CCN_DTAG_Interest, "Interest"},
    {CCN_DTAG_Key, "Key"},
    {CCN_DTAG_KeyLocator, "KeyLocator"},
    {CCN_DTAG_KeyName, "KeyName"},
    {CCN_DTAG_Length, "Length"},
    {CCN_DTAG_Link, "Link"},
    {CCN_DTAG_LinkAuthenticator, "LinkAuthenticator"},
    {CCN_DTAG_NameComponentCount, "NameComponentCount"},
    {CCN_DTAG_PublisherID, "PublisherID"},
    {CCN_DTAG_PublisherKeyID, "PublisherKeyID"},
    {CCN_DTAG_RootDigest, "RootDigest"},
    {CCN_DTAG_Signature, "Signature"},
    {CCN_DTAG_Start, "Start"},
    {CCN_DTAG_Timestamp, "Timestamp"},
    {CCN_DTAG_Type, "Type"},
    {CCN_DTAG_Nonce, "Nonce"},
    {CCN_DTAG_Scope, "Scope"},
    {CCN_DTAG_Exclude, "Exclude"},
    {CCN_DTAG_Bloom, "Bloom"},
    {CCN_DTAG_BloomSeed, "BloomSeed"},
    {CCN_DTAG_OrderPreference, "OrderPreference"},
    {CCN_DTAG_AnswerOriginKind, "AnswerOriginKind"},
    {CCN_DTAG_MatchFirstAvailableDescendant, "MatchFirstAvailableDescendant"},
    {CCN_DTAG_MatchLastAvailableDescendant, "MatchLastAvailableDescendant"},
    {CCN_DTAG_MatchNextAvailableSibling, "MatchNextAvailableSibling"},
    {CCN_DTAG_MatchLastAvailableSibling, "MatchLastAvailableSibling"},
    {CCN_DTAG_MatchEntirePrefix, "MatchEntirePrefix"},
    {CCN_DTAG_Witness, "Witness"},
    {CCN_DTAG_SignatureBits, "SignatureBits"},
    {CCN_DTAG_DigestAlgorithm, "DigestAlgorithm"},
    {CCN_DTAG_CCNProtocolDataUnit, "CCNProtocolDataUnit"},
    {CCN_DTAG_ExperimentalResponseFilter, "ExperimentalResponseFilter"},
};

const struct ccn_dict ccn_dtag_dict = {ARRAY_N(ccn_tagdict), ccn_tagdict};

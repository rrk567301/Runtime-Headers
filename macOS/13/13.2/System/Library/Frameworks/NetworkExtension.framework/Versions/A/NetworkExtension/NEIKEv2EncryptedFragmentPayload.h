@interface NEIKEv2EncryptedFragmentPayload : NEIKEv2EncryptedPayload {
    unsigned int _fragmentNumber;
    unsigned int _totalFragments;
    unsigned long long _nextPayload;
}

+ (id)copyTypeDescription;

- (unsigned long long)type;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;

@end

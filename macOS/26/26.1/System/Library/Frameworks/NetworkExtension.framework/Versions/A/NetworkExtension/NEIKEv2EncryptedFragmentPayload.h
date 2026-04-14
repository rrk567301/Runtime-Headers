@interface NEIKEv2EncryptedFragmentPayload : NEIKEv2EncryptedPayload {
    unsigned int _fragmentNumber;
    unsigned int _totalFragments;
}

- (unsigned long long)type;
- (id)typeDescription;
- (BOOL)hasRequiredFields;
- (BOOL)isFragment;
- (BOOL)parsePayloadData:(id)a0;

@end

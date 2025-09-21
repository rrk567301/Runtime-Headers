@interface DCPresentmentResponseEncryptionParameters : NSObject <NSCopying, NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ storage;
}

@property (class, nonatomic, readonly) DCPresentmentResponseEncryptionParameters *sessionEncryption;
@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

+ (id)appleHPKEWithSessionTranscript:(id)a0 certificateChain:(id)a1;
+ (id)webProposalHPKEWithSessionTranscript:(id)a0 rawEncryptionKey:(id)a1;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

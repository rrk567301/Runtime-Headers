@interface SEService.SERCredentialInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ moduleAIDs;
    void /* unknown type, empty encoding */ packageAID;
    void /* unknown type, empty encoding */ containerSize;
    void /* unknown type, empty encoding */ requiredMemoryForCredential;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

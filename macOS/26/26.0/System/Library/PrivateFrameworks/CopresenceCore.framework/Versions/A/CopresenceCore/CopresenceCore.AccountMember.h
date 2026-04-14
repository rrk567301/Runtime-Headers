@interface CopresenceCore.AccountMember : NSObject <NSObject, NSSecureCoding> {
    void /* unknown type, empty encoding */ isLocalAccount;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end

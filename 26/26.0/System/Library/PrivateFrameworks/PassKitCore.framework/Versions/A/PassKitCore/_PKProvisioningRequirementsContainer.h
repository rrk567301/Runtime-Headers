@class NSString;

@interface _PKProvisioningRequirementsContainer : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ requirements;
    void /* function */ provisioningSID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *provisioningSID;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)containerMinus:(id)a0;
- (BOOL)containsNotManagedAccount;
- (id)displayableError;

@end

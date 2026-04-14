@class NSString;

@interface _PKProvisioningRequirementsContainer : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ requirements;
    void /* function */ provisioningSID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *provisioningSID;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)containerMinus:(id)a0;
- (BOOL)containsNotManagedAccount;
- (id)displayableError;

@end

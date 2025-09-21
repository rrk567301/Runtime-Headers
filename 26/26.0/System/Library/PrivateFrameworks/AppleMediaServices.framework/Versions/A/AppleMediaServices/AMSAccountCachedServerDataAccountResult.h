@class NSError, AMSAccountCachedServerDataFields;

@interface AMSAccountCachedServerDataAccountResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AMSAccountCachedServerDataFields *fields;
@property (retain, nonatomic) NSError *error;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

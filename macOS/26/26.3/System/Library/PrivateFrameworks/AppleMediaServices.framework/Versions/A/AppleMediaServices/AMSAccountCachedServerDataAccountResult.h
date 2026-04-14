@class NSError, AMSAccountCachedServerDataFields;

@interface AMSAccountCachedServerDataAccountResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AMSAccountCachedServerDataFields *fields;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

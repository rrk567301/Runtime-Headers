@interface REMReminderFetchOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

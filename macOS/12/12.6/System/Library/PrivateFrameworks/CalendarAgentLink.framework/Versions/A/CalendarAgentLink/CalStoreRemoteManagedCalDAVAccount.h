@interface CalStoreRemoteManagedCalDAVAccount : CalStoreRemoteManagedAccount

@property (nonatomic) BOOL useKerberos;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)password;
- (void)setPassword:(id)a0;

@end

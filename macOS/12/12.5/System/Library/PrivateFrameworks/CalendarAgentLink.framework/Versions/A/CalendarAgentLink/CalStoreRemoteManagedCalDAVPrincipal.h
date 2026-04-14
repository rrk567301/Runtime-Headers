@class NSString, NSURL;

@interface CalStoreRemoteManagedCalDAVPrincipal : CalStoreRemoteManagedPrincipal

@property (retain, nonatomic) NSString *principalPath;
@property (retain, nonatomic) NSURL *principalURL;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

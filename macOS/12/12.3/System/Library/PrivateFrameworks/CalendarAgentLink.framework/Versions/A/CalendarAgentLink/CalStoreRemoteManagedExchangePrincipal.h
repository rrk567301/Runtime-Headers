@class NSString;

@interface CalStoreRemoteManagedExchangePrincipal : CalStoreRemoteManagedPrincipal

@property (retain, nonatomic) NSString *mailbox;
@property (retain, nonatomic) NSString *rootFolderID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

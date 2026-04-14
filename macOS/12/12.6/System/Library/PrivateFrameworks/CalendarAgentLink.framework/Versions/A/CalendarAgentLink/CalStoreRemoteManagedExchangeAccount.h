@class NSURL, NSString;

@interface CalStoreRemoteManagedExchangeAccount : CalStoreRemoteManagedAccount

@property (retain, nonatomic) NSURL *externalURL;
@property (retain, nonatomic) NSURL *internalWebServicesURL;
@property (retain, nonatomic) NSString *password;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

@class NSString, GEOApplicationAuditToken;

@interface GEOProxyClient : NSObject

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *bundleVersion;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;
@property (nonatomic) BOOL isApplication;

+ (id)compositeClientForClients:(id)a0;
+ (id)currentClient;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0;
- (id)initWithAuditToken:(id)a0;
- (id)URLConnectionProperties;

@end

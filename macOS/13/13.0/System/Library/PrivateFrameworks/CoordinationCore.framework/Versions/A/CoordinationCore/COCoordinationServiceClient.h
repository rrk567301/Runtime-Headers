@class NSString, NSXPCConnection;

@interface COCoordinationServiceClient : NSObject <NSCopying>

@property (readonly, retain, nonatomic) NSXPCConnection *connection;
@property (readonly, copy, nonatomic) NSString *clientBundleIdentifier;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;

@end

@class NSString;

@interface WKSecurityOrigin : NSObject <WKObject> {
    struct AlignedStorage<API::SecurityOrigin, 8UL> { struct Storage { unsigned char data[48]; } m_storage; } _securityOrigin;
}

@property (readonly, copy, nonatomic) NSString *protocol;
@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, nonatomic) long long port;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;

@end

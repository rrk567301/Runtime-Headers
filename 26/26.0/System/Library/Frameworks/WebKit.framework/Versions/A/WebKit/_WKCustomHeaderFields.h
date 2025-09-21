@class NSDictionary, NSArray, NSString;

@interface _WKCustomHeaderFields : NSObject <WKObject> {
    struct AlignedStorage<API::CustomHeaderFields, 8UL> { struct Storage { unsigned char data[48]; } m_storage; } _fields;
}

@property (copy, nonatomic) NSDictionary *fields;
@property (copy, nonatomic) NSArray *thirdPartyDomains;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;

@end

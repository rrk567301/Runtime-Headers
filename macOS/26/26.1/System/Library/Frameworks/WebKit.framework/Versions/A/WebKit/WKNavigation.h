@class NSString;

@interface WKNavigation : NSObject <WKObject> {
    struct AlignedStorage<API::Navigation, 16UL> { struct Storage { unsigned char data[3936]; } m_storage; } _navigation;
}

@property (readonly, nonatomic) long long effectiveContentMode;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;

@end

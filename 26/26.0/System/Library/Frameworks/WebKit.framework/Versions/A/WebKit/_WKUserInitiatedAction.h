@class NSString;

@interface _WKUserInitiatedAction : NSObject <WKObject> {
    struct AlignedStorage<API::UserInitiatedAction, 16UL> { struct Storage { unsigned char data[64]; } m_storage; } _userInitiatedAction;
}

@property (readonly, nonatomic, getter=isConsumed) BOOL consumed;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

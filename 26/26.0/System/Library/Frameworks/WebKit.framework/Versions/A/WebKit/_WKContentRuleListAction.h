@class NSArray, NSString;

@interface _WKContentRuleListAction : NSObject <WKObject> {
    struct AlignedStorage<API::ContentRuleListAction, 8UL> { struct Storage { unsigned char data[40]; } m_storage; } _action;
}

@property (readonly, nonatomic) BOOL blockedLoad;
@property (readonly, nonatomic) BOOL blockedCookies;
@property (readonly, nonatomic) BOOL madeHTTPS;
@property (readonly, nonatomic) BOOL redirected;
@property (readonly, nonatomic) BOOL modifiedHeaders;
@property (readonly, copy, nonatomic) NSArray *notifications;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end

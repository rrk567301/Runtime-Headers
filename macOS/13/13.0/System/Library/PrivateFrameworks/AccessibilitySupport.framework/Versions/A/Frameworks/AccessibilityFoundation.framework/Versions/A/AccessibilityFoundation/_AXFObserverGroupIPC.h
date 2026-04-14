@class NSString, AXFUIElement, NSMutableDictionary;

@interface _AXFObserverGroupIPC : NSObject

@property (copy, nonatomic) NSString *_name;
@property (retain, nonatomic) AXFUIElement *_element;
@property (retain, nonatomic) AXFUIElement *_application;
@property (retain, nonatomic) NSMutableDictionary *_observers;
@property (nonatomic) BOOL _registered;
@property (readonly, nonatomic) long long observerID;
@property (nonatomic) struct __AXObserver { } *observer;

+ (id)applicationIdentifierForObserverID:(long long)a0;
+ (void)setApplicationIdentifier:(id)a0 observerID:(long long)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (struct __AXUIElement { } *)_elementRef;
- (BOOL)isObserving;
- (void)pruneObservers;
- (id)initWithName:(id)a0 element:(id)a1 application:(id)a2;
- (BOOL)registerObserver;
- (BOOL)unregisterObserverAsync;
- (BOOL)unregisterObserver;
- (BOOL)_unregisterObserverSync:(BOOL)a0;
- (BOOL)addObserver:(id)a0 selector:(SEL)a1 queue:(id)a2;
- (BOOL)removeObserver:(id)a0 selector:(SEL)a1;
- (BOOL)isObserving:(id)a0 element:(id)a1;
- (id)copyForFiring;
- (void)fireWithElement:(id)a0 userInfo:(id)a1;

@end

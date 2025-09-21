@class NSString, AXFUIElement, NSMutableDictionary;

@interface _AXFObserverGroupIPC : NSObject

@property (copy, nonatomic) NSString *_name;
@property (retain, nonatomic) AXFUIElement *_element;
@property (retain, nonatomic) AXFUIElement *_application;
@property (retain, nonatomic) NSMutableDictionary *_observers;
@property (nonatomic) char _registered;
@property (readonly, nonatomic) long long observerID;
@property (nonatomic) struct __AXObserver { } *observer;

+ (id)applicationIdentifierForObserverID:(long long)a0;
+ (void)setApplicationIdentifier:(id)a0 observerID:(long long)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (char)isObserving;
- (struct __AXUIElement { } *)_elementRef;
- (char)_unregisterObserverSync:(char)a0;
- (char)addObserver:(id)a0 selector:(SEL)a1 queue:(id)a2;
- (id)copyForFiring;
- (void)fireWithElement:(id)a0 userInfo:(id)a1;
- (id)initWithName:(id)a0 element:(id)a1 application:(id)a2;
- (char)isObserving:(id)a0 element:(id)a1;
- (void)pruneObservers;
- (char)registerObserver;
- (char)removeObserver:(id)a0 selector:(SEL)a1;
- (char)unregisterObserver;
- (char)unregisterObserverAsync;

@end

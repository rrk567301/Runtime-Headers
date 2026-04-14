@class NSString, NSHashTable;
@protocol TIKeyboardAssertionManagerDelegate;

@interface TIKeyboardAssertionManager : NSObject <TIKeyboardAssertionManaging>

@property (nonatomic) BOOL hasAssertions;
@property (nonatomic) BOOL pendingUpdate;
@property (readonly, nonatomic) NSHashTable *assertions;
@property (nonatomic) BOOL hasBackgroundActivityAssertions;
@property (nonatomic) long long backgroundActivityAssertions;
@property (nonatomic) id<TIKeyboardAssertionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)singletonInstance;
+ (id)sharedAssertionManager;
+ (void)setSharedAssertionManager:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)performUpdate;
- (void)releaseBackgroundActivityAssertion;
- (void)addAssertionForObject:(id)a0;
- (void)removeAssertionForObject:(id)a0;
- (void)retainBackgroundActivityAssertion;
- (void)scheduleUpdate;
- (void)performBackgroundActivityUpdate;

@end

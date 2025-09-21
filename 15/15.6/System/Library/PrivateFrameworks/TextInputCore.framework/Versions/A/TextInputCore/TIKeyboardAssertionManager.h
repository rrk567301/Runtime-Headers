@class NSString, NSHashTable;
@protocol TIKeyboardAssertionManagerDelegate;

@interface TIKeyboardAssertionManager : NSObject <TIKeyboardAssertionManaging>

@property (nonatomic) char hasAssertions;
@property (nonatomic) char pendingUpdate;
@property (readonly, nonatomic) NSHashTable *assertions;
@property (nonatomic) char hasBackgroundActivityAssertions;
@property (nonatomic) long long backgroundActivityAssertions;
@property (nonatomic) id<TIKeyboardAssertionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)singletonInstance;
+ (void)setSharedAssertionManager:(id)a0;
+ (id)sharedAssertionManager;

- (id)init;
- (void).cxx_destruct;
- (void)performUpdate;
- (void)performBackgroundActivityUpdate;
- (void)addAssertionForObject:(id)a0;
- (void)releaseBackgroundActivityAssertion;
- (void)removeAssertionForObject:(id)a0;
- (void)retainBackgroundActivityAssertion;
- (void)scheduleUpdate;

@end

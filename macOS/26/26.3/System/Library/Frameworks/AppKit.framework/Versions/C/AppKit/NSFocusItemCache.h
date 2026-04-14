@class NSArray, NSMapTable, NSString, NSKeyValueDependencyInfo;

@interface NSFocusItemCache : NSObject <NSDynamicPropertyContainer>

@property unsigned long long seed;
@property unsigned long long updateVersion;
@property unsigned long long cacheVersion;
@property (readonly, getter=isReady) BOOL ready;
@property (retain) NSArray *arrangedItems;
@property (copy) NSMapTable *nextFocusItems;
@property (copy) NSMapTable *previousFocusItems;
@property (readonly) BOOL isArrangementValid;
@property (retain) NSKeyValueDependencyInfo *dependencyInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyTracksDependenciesOnValueForKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_updateCache;
- (BOOL)_validateNavigationLoopForGroupingItem:(id)a0;
- (void)invalidateArrangement;
- (BOOL)resolveDestination:(id *)a0 from:(id)a1 heading:(unsigned long long)a2;
- (void)updateArrangement:(id)a0;

@end

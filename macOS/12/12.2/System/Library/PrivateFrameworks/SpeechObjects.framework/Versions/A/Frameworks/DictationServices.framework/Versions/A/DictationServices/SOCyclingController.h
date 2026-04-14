@class NSArray, SOCyclingContainer;

@interface SOCyclingController : NSObject

@property (nonatomic) unsigned long long cycleIndex;
@property (nonatomic) BOOL isMakingNextContainerVisible;
@property (nonatomic) BOOL shouldSkipMakingNextContainerVisible;
@property (retain, nonatomic) SOCyclingContainer *currentContainer;
@property (retain, nonatomic) SOCyclingContainer *nextContainer;
@property (readonly, nonatomic) NSArray *containersInCycle;

- (void)dealloc;
- (void)_makeNextContainerVisible;
- (void)beginCycling;
- (void)endCycling;

@end

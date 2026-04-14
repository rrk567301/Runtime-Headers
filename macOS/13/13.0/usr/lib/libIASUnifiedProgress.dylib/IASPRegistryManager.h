@interface IASPRegistryManager : NSObject

+ (void)clear;
+ (id)currentPhaseName;
+ (void)setCurrentPhaseName:(id)a0;
+ (id)phases;
+ (void)setPhases:(id)a0;
+ (float)startingPercentage;

@end

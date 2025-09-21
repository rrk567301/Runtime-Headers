@class NSArray;

@interface SLSDisplayWall : NSObject

@property (class, readonly, nonatomic) NSArray *availableDisplayWallGroups;

+ (int)disableDisplayWall:(id)a0;
+ (int)enableDisplayWallWithConfiguration:(id)a0;
+ (char)isDisplayWall:(id)a0;
+ (char)validateDisplayWallConfiguration:(id)a0;

- (id)init;

@end

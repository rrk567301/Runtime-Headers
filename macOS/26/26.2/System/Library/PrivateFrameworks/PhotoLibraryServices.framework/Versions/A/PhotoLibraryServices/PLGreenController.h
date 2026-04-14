@class NSDictionary;

@interface PLGreenController : NSObject

@property (readonly, nonatomic) NSDictionary *currentGreenValues;

- (void).cxx_destruct;
- (id)init;
- (BOOL)greenValuesSimilarToGreenValues:(id)a0;
- (BOOL)isGreenStateValid;
- (void)readValuesFromDisk;

@end

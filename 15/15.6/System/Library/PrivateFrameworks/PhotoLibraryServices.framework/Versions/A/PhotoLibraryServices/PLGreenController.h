@class NSDictionary;

@interface PLGreenController : NSObject

@property (readonly, nonatomic) NSDictionary *currentGreenValues;

- (id)init;
- (void).cxx_destruct;
- (char)greenValuesSimilarToGreenValues:(id)a0;
- (char)isGreenStateValid;
- (void)readValuesFromDisk;

@end

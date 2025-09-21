@class NSNumber;

@interface PCNewsSegmentation : NSObject

@property (class, readonly, nonatomic) NSNumber *ageGroup;
@property (class, readonly, nonatomic) NSNumber *gender;

+ (id)segmentData;
+ (void)addClientToSegments:(id)a0 replaceExisting:(char)a1 privateSegment:(char)a2;
+ (id)_classProperties;
+ (void)_updateGenderAndAgeGroupValues;

@end

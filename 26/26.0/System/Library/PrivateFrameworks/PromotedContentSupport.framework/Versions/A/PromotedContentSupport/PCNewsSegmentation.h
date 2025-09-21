@class NSNumber;

@interface PCNewsSegmentation : NSObject

@property (class, readonly, nonatomic) NSNumber *ageGroup;
@property (class, readonly, nonatomic) NSNumber *gender;

+ (void)_updateGenderAndAgeGroupValues;
+ (id)segmentData;
+ (void)addClientToSegments:(id)a0 replaceExisting:(BOOL)a1 privateSegment:(BOOL)a2;
+ (id)_classProperties;

@end

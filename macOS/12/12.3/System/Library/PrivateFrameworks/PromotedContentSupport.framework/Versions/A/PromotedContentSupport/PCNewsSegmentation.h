@class NSNumber;

@interface PCNewsSegmentation : NSObject

@property (class, readonly, nonatomic) NSNumber *ageGroup;
@property (class, readonly, nonatomic) NSNumber *gender;

+ (id)segmentData;
+ (void)addClientToSegments:(id)a0 replaceExisting:(BOOL)a1 privateSegment:(BOOL)a2;
+ (void)_updateGenderAndAgeGroupValues;
+ (id)_classProperties;

@end

@class NSString;

@interface HKBloodPressureClassificationCategoryData : NSObject {
    void /* unknown type, empty encoding */ systolicRange;
    void /* unknown type, empty encoding */ diastolicRange;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long classificationGuidelines;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) double systolicUpperBound;
@property (nonatomic, readonly) double systolicLowerBound;
@property (nonatomic, readonly) double diastolicUpperBound;
@property (nonatomic, readonly) double diastolicLowerBound;
@property (nonatomic, readonly) long long rangeRelationship;

- (id)init;
- (void).cxx_destruct;
- (id)initWithClassificationGuidelines:(long long)a0 identifier:(id)a1 systolicRange:(id)a2 diastolicRange:(id)a3 rangeRelationship:(long long)a4;

@end

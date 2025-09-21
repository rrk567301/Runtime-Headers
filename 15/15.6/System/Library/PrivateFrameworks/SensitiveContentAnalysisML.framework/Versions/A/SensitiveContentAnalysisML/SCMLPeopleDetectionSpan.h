@class NSArray;

@interface SCMLPeopleDetectionSpan : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) char isGeneric;
@property (nonatomic) char isGroup;
@property (nonatomic) char hasAge;
@property (nonatomic) char hasGender;
@property (nonatomic) char hasEthnicity;
@property (nonatomic) char hasImplicitCategoryRequiringPersonalization;
@property (retain, nonatomic) NSArray *ageSpans;
@property (retain, nonatomic) NSArray *genderSpans;
@property (retain, nonatomic) NSArray *ethnicitySpans;

- (id)init;
- (void).cxx_destruct;

@end

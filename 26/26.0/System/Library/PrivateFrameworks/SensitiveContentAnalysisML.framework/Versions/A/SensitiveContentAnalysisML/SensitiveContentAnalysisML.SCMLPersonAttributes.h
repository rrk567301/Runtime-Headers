@class NSArray;

@interface SensitiveContentAnalysisML.SCMLPersonAttributes : NSObject {
    void /* function */ age;
    void /* function */ gender;
    void /* function */ ethnicity;
}

@property (nonatomic) BOOL specific;
@property (nonatomic) BOOL isGroup;
@property (nonatomic) BOOL hasAge;
@property (nonatomic) BOOL hasGender;
@property (nonatomic) BOOL hasEthnicity;
@property (nonatomic, copy) NSArray *age;
@property (nonatomic, copy) NSArray *gender;
@property (nonatomic, copy) NSArray *ethnicity;
@property (nonatomic) BOOL hasImplicitCategoryRequiringPersonalization;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

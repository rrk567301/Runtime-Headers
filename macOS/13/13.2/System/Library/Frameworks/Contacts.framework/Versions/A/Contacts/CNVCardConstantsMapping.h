@class NSDictionary;

@interface CNVCardConstantsMapping : NSObject

@property (retain, nonatomic) NSDictionary *mapping;

+ (id)CNToVCardInstantMessageConstantsMapping;
+ (id)vCardToCNInstantMessageConstantsMapping;
+ (id)CNToVCardSocialProfileConstantsMapping;
+ (id)vCardToCNSocialProfileConstantsMapping;

- (void).cxx_destruct;
- (id)initWithMapping:(id)a0;
- (id)invertedMapping;
- (id)mappedConstant:(id)a0;

@end

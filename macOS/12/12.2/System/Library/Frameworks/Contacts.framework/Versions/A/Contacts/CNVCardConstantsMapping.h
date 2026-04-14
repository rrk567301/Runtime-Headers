@class NSDictionary;

@interface CNVCardConstantsMapping : NSObject

@property (retain, nonatomic) NSDictionary *mapping;

+ (id)vCardToCNSocialProfileConstantsMapping;
+ (id)vCardToCNInstantMessageConstantsMapping;
+ (id)CNToVCardSocialProfileConstantsMapping;
+ (id)CNToVCardInstantMessageConstantsMapping;

- (void).cxx_destruct;
- (id)mappedConstant:(id)a0;
- (id)initWithMapping:(id)a0;
- (id)invertedMapping;

@end

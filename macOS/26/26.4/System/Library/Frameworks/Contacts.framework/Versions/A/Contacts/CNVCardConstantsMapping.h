@class NSDictionary;

@interface CNVCardConstantsMapping : NSObject

@property (retain, nonatomic) NSDictionary *mapping;

+ (id)CNToVCardSocialProfileConstantsMapping;
+ (id)CNToVCardInstantMessageConstantsMapping;
+ (id)vCardToCNInstantMessageConstantsMapping;
+ (id)vCardToCNSocialProfileConstantsMapping;

- (void).cxx_destruct;
- (id)invertedMapping;
- (id)mappedConstant:(id)a0;
- (id)initWithMapping:(id)a0;

@end

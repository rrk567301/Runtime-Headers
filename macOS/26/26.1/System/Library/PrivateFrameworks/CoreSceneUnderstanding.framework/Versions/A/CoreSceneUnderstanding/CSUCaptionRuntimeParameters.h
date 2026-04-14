@class NSArray;

@interface CSUCaptionRuntimeParameters : NSObject

@property (nonatomic) double captionModelMinimumConfidence;
@property (nonatomic) double captionModelLengthNormalizationFactor;
@property (nonatomic) int excludeGenderStrategy;
@property (retain, nonatomic) NSArray *replacements;
@property (retain, nonatomic) NSArray *genderedTokens;
@property (retain, nonatomic) NSArray *blackListRules;
@property (retain, nonatomic) NSArray *excludeGenderReplacements;
@property (retain, nonatomic) NSArray *excludeGenderTriggers;
@property (nonatomic) int genderOption;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (void)_loadRuntimeParameters:(id)a0;

@end

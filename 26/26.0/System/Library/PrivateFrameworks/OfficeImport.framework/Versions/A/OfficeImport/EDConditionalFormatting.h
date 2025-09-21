@class NSMutableArray, EDReferenceCollection;

@interface EDConditionalFormatting : NSObject {
    NSMutableArray *mRules;
    EDReferenceCollection *mRanges;
    BOOL mApplyToDate;
}

+ (id)conditionalFormatting;

- (id)init;
- (id)description;
- (id)rules;
- (void)addRule:(id)a0;
- (void)addRange:(id)a0;
- (id)rangeAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)rangeCount;
- (BOOL)isApplyToDate;
- (id)ruleAtIndex:(unsigned long long)a0;
- (unsigned long long)ruleCount;

@end

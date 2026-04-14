@class NSMutableArray, EDReferenceCollection;

@interface EDConditionalFormatting : NSObject {
    NSMutableArray *mRules;
    EDReferenceCollection *mRanges;
    BOOL mApplyToDate;
}

+ (id)conditionalFormatting;

- (id)description;
- (id)init;
- (unsigned long long)rangeCount;
- (id)rangeAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addRange:(id)a0;
- (id)rules;
- (void)addRule:(id)a0;
- (unsigned long long)ruleCount;
- (id)ruleAtIndex:(unsigned long long)a0;
- (BOOL)isApplyToDate;

@end

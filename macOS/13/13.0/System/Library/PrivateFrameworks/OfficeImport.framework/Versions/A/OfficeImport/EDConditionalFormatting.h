@class NSMutableArray, EDReferenceCollection;

@interface EDConditionalFormatting : NSObject {
    NSMutableArray *mRules;
    EDReferenceCollection *mRanges;
    BOOL mApplyToDate;
}

+ (id)conditionalFormatting;

- (id)description;
- (id)init;
- (id)rangeAtIndex:(unsigned long long)a0;
- (unsigned long long)rangeCount;
- (void).cxx_destruct;
- (id)rules;
- (void)addRange:(id)a0;
- (unsigned long long)ruleCount;
- (id)ruleAtIndex:(unsigned long long)a0;
- (void)addRule:(id)a0;
- (BOOL)isApplyToDate;

@end

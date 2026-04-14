@class NSMutableArray, EDReferenceCollection;

@interface EDConditionalFormatting : NSObject {
    NSMutableArray *mRules;
    EDReferenceCollection *mRanges;
    BOOL mApplyToDate;
}

+ (id)conditionalFormatting;

- (void)addRange:(id)a0;
- (void)addRule:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)rules;
- (id)rangeAtIndex:(unsigned long long)a0;
- (id)init;
- (unsigned long long)rangeCount;
- (BOOL)isApplyToDate;
- (id)ruleAtIndex:(unsigned long long)a0;
- (unsigned long long)ruleCount;

@end

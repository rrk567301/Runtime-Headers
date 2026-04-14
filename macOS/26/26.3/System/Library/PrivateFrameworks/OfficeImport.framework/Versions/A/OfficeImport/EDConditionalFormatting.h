@class NSMutableArray, EDReferenceCollection;

@interface EDConditionalFormatting : NSObject {
    NSMutableArray *mRules;
    EDReferenceCollection *mRanges;
    BOOL mApplyToDate;
}

+ (id)conditionalFormatting;

- (id)rangeAtIndex:(unsigned long long)a0;
- (id)description;
- (id)init;
- (id)rules;
- (void).cxx_destruct;
- (void)addRange:(id)a0;
- (void)addRule:(id)a0;
- (unsigned long long)rangeCount;
- (BOOL)isApplyToDate;
- (id)ruleAtIndex:(unsigned long long)a0;
- (unsigned long long)ruleCount;

@end

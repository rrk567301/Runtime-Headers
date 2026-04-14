@class NSMutableArray, EDReferenceCollection;

@interface EDConditionalFormatting : NSObject {
    NSMutableArray *mRules;
    EDReferenceCollection *mRanges;
    BOOL mApplyToDate;
}

+ (id)conditionalFormatting;

- (id)rules;
- (id)rangeAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addRange:(id)a0;
- (id)init;
- (void)addRule:(id)a0;
- (id)description;
- (unsigned long long)rangeCount;
- (BOOL)isApplyToDate;
- (id)ruleAtIndex:(unsigned long long)a0;
- (unsigned long long)ruleCount;

@end

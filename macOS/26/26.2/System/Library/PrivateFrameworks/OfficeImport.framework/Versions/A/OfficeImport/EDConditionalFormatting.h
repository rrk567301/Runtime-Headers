@class NSMutableArray, EDReferenceCollection;

@interface EDConditionalFormatting : NSObject {
    NSMutableArray *mRules;
    EDReferenceCollection *mRanges;
    BOOL mApplyToDate;
}

+ (id)conditionalFormatting;

- (void)addRule:(id)a0;
- (void)addRange:(id)a0;
- (id)rangeAtIndex:(unsigned long long)a0;
- (id)rules;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (unsigned long long)rangeCount;
- (BOOL)isApplyToDate;
- (id)ruleAtIndex:(unsigned long long)a0;
- (unsigned long long)ruleCount;

@end

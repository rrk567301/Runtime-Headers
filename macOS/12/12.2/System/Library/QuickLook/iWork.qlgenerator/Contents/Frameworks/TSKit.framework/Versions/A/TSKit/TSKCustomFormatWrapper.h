@class NSUUID, TSUCustomFormatData, TSUCustomFormat, TSKCurrencyFormat, TSKFormat;

@interface TSKCustomFormatWrapper : TSKFormat {
    TSKFormat *_cachedDefaultNonCustomFormat;
    TSKCurrencyFormat *_cachedNoAccountingStyleFormat;
}

@property (nonatomic) unsigned char appliedConditionKey;
@property (readonly, nonatomic) NSUUID *customFormatKey;
@property (readonly, nonatomic) TSUCustomFormat *customFormat;
@property (readonly, nonatomic) TSUCustomFormatData *customFormatData;
@property (nonatomic) BOOL isMarkedCorrupt;

+ (id)unpopulatedCustomFormatWrapperWithFormatType:(unsigned int)a0 customFormatKey:(id)a1;
+ (id)populatedCustomFormatWrapperFromCFWrapper:(id)a0 customFormat:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)stringFromDouble:(double)a0 locale:(id)a1;
- (id)asCustomFormatWrapper;
- (id)currencyCodeForValue:(double)a0;
- (id)initWithFormatType:(unsigned int)a0 customFormatKey:(id)a1 customFormat:(id)a2 appliedConditionKey:(unsigned char)a3;
- (id)stringFromDate:(id)a0 locale:(id)a1;
- (id)stringFromString:(id)a0 locale:(id)a1;
- (id)applyConditionalValue:(double)a0;
- (id)p_defaultNumberFormatForLocale:(id)a0;
- (id)p_nonCustomCurrencyFormatRemovingAccountingStyle:(BOOL)a0 locale:(id)a1;
- (id)defaultNonCustomFormatForLocale:(id)a0;
- (id)nonCustomCurrencyFormatSansAccountingStyleForLocale:(id)a0;

@end

@class NSString, StockDataSource, NSURL, Exchange, StockChartData;

@interface Stock : NSObject {
    StockChartData *_chartDataArray[9];
}

@property (retain, nonatomic) NSString *symbol;
@property (retain, nonatomic) NSString *companyName;
@property (retain, nonatomic) NSString *shortCompanyName;
@property (retain, nonatomic) Exchange *exchange;
@property (retain, nonatomic) NSString *price;
@property (retain, nonatomic) NSString *change;
@property (retain, nonatomic) NSString *symbolType;
@property (retain, nonatomic) NSString *open;
@property (retain, nonatomic) NSString *high;
@property (retain, nonatomic) NSString *low;
@property (retain, nonatomic) NSString *yearHigh;
@property (retain, nonatomic) NSString *yearLow;
@property (retain, nonatomic) NSString *volume;
@property (retain, nonatomic) NSString *averageVolume;
@property (retain, nonatomic) NSString *marketcap;
@property (retain, nonatomic) NSString *peRatio;
@property (retain, nonatomic) NSString *dividendYield;
@property (readonly, nonatomic) unsigned int pricePrecision;
@property (retain, nonatomic) NSURL *infoURL;
@property (retain, nonatomic) StockDataSource *dataSource;
@property (nonatomic) double timeQuoteLastUpdated;
@property (nonatomic) double timeMetadataLastUpdated;

+ (id)percentSymbol;
+ (void)resetLocale;
+ (id)urlForStockSymbol:(id)a0;
+ (id)PercentFormatter;
+ (id)_formattedStringForNumber:(id)a0 fractionDigits:(unsigned int)a1 percentStyle:(BOOL)a2 groupingSeparators:(BOOL)a3;
+ (id)formattedStringForNumber:(id)a0 fractionDigits:(unsigned int)a1 percentStyle:(BOOL)a2 groupingSeparators:(BOOL)a3 droppingFractionDigitsIfLengthExceeds:(unsigned int)a4;
+ (id)formattedStringForNumber:(id)a0 fractionDigits:(unsigned int)a1 percentStyle:(BOOL)a2 groupingSeparators:(BOOL)a3;
+ (id)BlankValueString;
+ (id)formattedStringForString:(id)a0 fractionDigits:(unsigned int)a1 percentStyle:(BOOL)a2 droppingFractionDigitsIfLengthExceeds:(unsigned int)a3;
+ (id)postfixCharacterForMagnitude:(unsigned int)a0 unitMagnitude:(unsigned int *)a1;
+ (id)formattedStringForNumber:(id)a0 fractionDigits:(unsigned int)a1 percentStyle:(BOOL)a2;
+ (id)localizedMagnitudeAbbreviatedStringWithString:(id)a0 fractionDigits:(unsigned int)a1;
+ (id)_potentiallyAbsentKeys;
+ (id)urlForStock:(id)a0;
+ (id)formattedStringForString:(id)a0 fractionDigits:(unsigned int)a1 percentStyle:(BOOL)a2;
+ (BOOL)localeUsesASCIIDigits;
+ (id)localizedMagnitudeAbbreviatedStringWithString:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)archiveDictionary;
- (id)listName;
- (id)formattedPrice;
- (double)_updateInterval;
- (void)resetLocale;
- (void)_updatePricePrecision;
- (void)populateFromDictionary:(id)a0;
- (void)setChartData:(id)a0 forInterval:(long long)a1;
- (id)formattedChangePercent:(BOOL)a0;
- (BOOL)marketIsOpen;
- (BOOL)isIndex;
- (BOOL)changeIsNegative;
- (BOOL)changeIsZero;
- (id)formattedChangePercent:(BOOL)a0 includePercentSign:(BOOL)a1;
- (BOOL)isQuoteStale;
- (BOOL)isMetadataStale;
- (BOOL)doesQuoteNeedUpdate;
- (BOOL)doesMetadataNeedUpdate;
- (id)chartDataForInterval:(long long)a0;
- (void)updateQuoteWithDictionary:(id)a0 forTime:(double)a1;
- (void)updateMetadataWithDictionary:(id)a0 forTime:(double)a1;

@end

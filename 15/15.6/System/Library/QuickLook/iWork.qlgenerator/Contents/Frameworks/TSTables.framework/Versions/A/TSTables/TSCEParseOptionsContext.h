@class TSCEError;

@interface TSCEParseOptionsContext : NSObject

@property (retain, nonatomic) TSCEError *error;
@property (nonatomic) char isChartFormula;
@property (nonatomic) char isSageUpgrade;
@property (nonatomic) char isArrayMode;
@property (nonatomic) char needsSageImportRewrite;

- (id)init;
- (void).cxx_destruct;

@end

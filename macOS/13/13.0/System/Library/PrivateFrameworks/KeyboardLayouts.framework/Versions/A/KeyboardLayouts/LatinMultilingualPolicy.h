@class NSLocale;

@interface LatinMultilingualPolicy : NSObject <KLPrimaryInputSourcePolicy>

@property (retain, nonatomic) NSLocale *primaryLocale;

- (void).cxx_destruct;
- (BOOL)isPrimaryInputSource:(id)a0;
- (id)initWithPrimaryLocale:(id)a0;

@end

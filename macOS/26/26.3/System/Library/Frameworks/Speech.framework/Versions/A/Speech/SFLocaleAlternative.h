@class NSLocale;

@interface SFLocaleAlternative : NSObject

@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) double confidence;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLocale:(id)a0 confidence:(double)a1;

@end

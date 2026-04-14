@class SFColor, TLKAppearance;

@interface SearchUIColorRequest : NSObject

@property (retain, nonatomic) SFColor *sfColor;
@property (retain, nonatomic) TLKAppearance *appearance;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqualToColorRequest:(id)a0;

@end

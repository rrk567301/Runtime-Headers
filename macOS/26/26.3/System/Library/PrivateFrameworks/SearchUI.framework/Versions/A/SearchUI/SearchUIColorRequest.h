@class SFColor, TLKAppearance;

@interface SearchUIColorRequest : NSObject

@property (retain, nonatomic) SFColor *sfColor;
@property (retain, nonatomic) TLKAppearance *appearance;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToColorRequest:(id)a0;

@end

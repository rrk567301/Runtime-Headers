@class NSString;

@interface OADBaseFontCollection : NSObject

@property (copy, nonatomic) NSString *latinFont;
@property (copy, nonatomic) NSString *eastAsianFont;
@property (copy, nonatomic) NSString *complexScriptFont;

- (void).cxx_destruct;
- (char)isEmpty;
- (id)baseFontForId:(int)a0;
- (char)isEqualToBaseFontCollection:(id)a0;
- (void)setBaseFont:(id)a0 forId:(int)a1;

@end

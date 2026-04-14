@class NSString, OADFontCollection;

@interface OADFontScheme : NSObject

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) OADFontCollection *majorFont;
@property (readonly, nonatomic) OADFontCollection *minorFont;

- (BOOL)isEmpty;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)fontForId:(int)a0;
- (void)validateFontScheme;

@end

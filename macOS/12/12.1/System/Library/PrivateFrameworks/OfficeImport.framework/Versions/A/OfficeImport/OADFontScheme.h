@class NSString, OADFontCollection;

@interface OADFontScheme : NSObject

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) OADFontCollection *majorFont;
@property (readonly, nonatomic) OADFontCollection *minorFont;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (void)validateFontScheme;
- (id)fontForId:(int)a0;

@end

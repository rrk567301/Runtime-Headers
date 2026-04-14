@class NSString, OADFontCollection;

@interface OADFontScheme : NSObject

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) OADFontCollection *majorFont;
@property (readonly, nonatomic) OADFontCollection *minorFont;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)fontForId:(int)a0;
- (void)validateFontScheme;

@end

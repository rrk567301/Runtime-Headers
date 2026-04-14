@class NSString, OADFontCollection;

@interface OADFontScheme : NSObject

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) OADFontCollection *majorFont;
@property (readonly, nonatomic) OADFontCollection *minorFont;

- (BOOL)isEmpty;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)fontForId:(int)a0;
- (void)validateFontScheme;

@end

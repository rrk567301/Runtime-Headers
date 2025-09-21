@class NSString;

@interface VIImageRegionDomainInfo : NSObject <NSCopying>

@property (readonly, nonatomic) char isLowConfidence;
@property (readonly, nonatomic) NSString *domainKey;
@property (readonly, nonatomic) NSString *labelName;
@property (readonly, nonatomic) NSString *glyphName;
@property (readonly, nonatomic) char shouldShowDynamicGlyph;
@property (readonly, nonatomic) NSString *displayLabel;
@property (readonly, nonatomic) NSString *displayMessage;
@property (readonly, nonatomic) char hasFocalPoint;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } focalPoint;
@property (readonly, nonatomic) char isCornerGlyph;
@property (readonly, nonatomic) char ocrResultsRequired;
@property (readonly, nonatomic) char barcodeResultsRequired;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDomainKey:(id)a0 labelName:(id)a1 glyphName:(id)a2 displayLabel:(id)a3 displayMessage:(id)a4 hasFocalPoint:(char)a5 focalPoint:(struct CGPoint { double x0; double x1; })a6 isCornerGlyph:(char)a7 ocrResultsRequired:(char)a8 barcodeResultsRequired:(char)a9 isLowConfidence:(char)a10 shouldShowDynamicGlyph:(char)a11;

@end

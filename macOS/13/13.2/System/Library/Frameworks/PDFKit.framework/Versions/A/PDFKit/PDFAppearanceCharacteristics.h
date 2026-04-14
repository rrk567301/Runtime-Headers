@class NSString, NSDictionary, PDFAppearanceCharacteristicsPrivate, NSColor;

@interface PDFAppearanceCharacteristics : NSObject <NSCopying> {
    PDFAppearanceCharacteristicsPrivate *_private;
}

@property (nonatomic) long long controlType;
@property (copy, nonatomic) NSColor *backgroundColor;
@property (copy, nonatomic) NSColor *borderColor;
@property (nonatomic) long long rotation;
@property (copy, nonatomic) NSString *caption;
@property (copy, nonatomic) NSString *rolloverCaption;
@property (copy, nonatomic) NSString *downCaption;
@property (readonly, copy, nonatomic) NSDictionary *appearanceCharacteristicsKeyValues;

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct CGPDFForm { } *)icon;
- (struct __CFDictionary { } *)createDictionaryRef;
- (BOOL)scaleProportional;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forControlType:(long long)a1;
- (void)addColor:(id)a0 forKey:(struct __CFString { } *)a1 toDictionaryRef:(struct __CFDictionary { } *)a2;

@end

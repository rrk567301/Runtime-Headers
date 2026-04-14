@class NSColor, NSString;

@interface _MKPinAnnotationViewImageCacheKey : NSObject {
    unsigned long long _mapType;
    NSColor *_pinColor;
    NSString *_appearanceName;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithMapType:(unsigned long long)a0 pinColor:(id)a1 effectiveAppearance:(id)a2;

@end

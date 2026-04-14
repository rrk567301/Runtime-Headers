@class NSString;

@interface UVCExtensionAppleDisplayStream : UVCExtensionAppleStream {
    NSString *_cfSupport;
    NSString *_cmioCenterStageRectOfInterestProperty;
    BOOL _cfSupported;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _centerStageRectOfInterest;
}

- (void).cxx_destruct;
- (id)availableProperties;
- (id)initWithDevice:(id)a0 uvcFormats:(id)a1 source:(id)a2 attributes:(id)a3;
- (void)observeValueForKeyPathSync:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)setStreamPropertiesSync:(id)a0 error:(id *)a1;
- (id)streamPropertiesForPropertiesSync:(id)a0 error:(id *)a1;

@end

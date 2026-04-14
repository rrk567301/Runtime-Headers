@class NSString;

@interface UVCExtensionAppleDisplayStream : UVCExtensionAppleStream {
    NSString *_cfSupport;
    BOOL _cfSupported;
}

- (void).cxx_destruct;
- (id)availableProperties;
- (id)initWithDevice:(id)a0 uvcFormats:(id)a1 source:(id)a2 attributes:(id)a3;
- (void)observeValueForKeyPathSync:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)streamPropertiesForPropertiesSync:(id)a0 error:(id *)a1;

@end

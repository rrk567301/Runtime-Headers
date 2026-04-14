@interface UVCExtensionAppleDisplayDeskViewStream : UVCExtensionAppleDisplayStream {
    int _deskViewMode;
    float _deskViewZoom;
}

- (void)configureStream;
- (void)addSupportedStreamProperties:(id)a0;
- (void)configureStreamStateForStartStreamRequest;
- (void)handleChangedStreamProperties:(id)a0;
- (void)handleTransportLayerAttachmentsFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithDevice:(id)a0 uvcFormats:(id)a1 source:(id)a2 attributes:(id)a3;
- (void)restoreStreamStateOnStopStreamRequest;
- (void)setDefaultStreamPropertyStatesForProperties:(id)a0 validProperties:(id)a1;

@end

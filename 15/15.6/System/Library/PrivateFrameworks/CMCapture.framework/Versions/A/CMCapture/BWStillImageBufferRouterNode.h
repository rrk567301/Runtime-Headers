@class NSArray, BWNodeOutput, NSDictionary;

@interface BWStillImageBufferRouterNode : BWNode {
    char _usingBravoDevice;
    char _usingPearlDevice;
    char _HDRSupported;
    char _SISSupported;
    char _GNRSISSupported;
    char _LTMHDRSupported;
    NSArray *_inputPortTypes;
    NSDictionary *_portTypeToInput;
}

@property (readonly, nonatomic) BWNodeOutput *defaultOutput;
@property (readonly, nonatomic) BWNodeOutput *HDROutput;
@property (readonly, nonatomic) BWNodeOutput *SISOutput;
@property (readonly, nonatomic) BWNodeOutput *bravoTelephotoOutput;
@property (readonly, nonatomic) BWNodeOutput *pearlInfraredOutput;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)handleStillImagePrewarmWithSettings:(id)a0 forInput:(id)a1;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)a0 forInput:(id)a1;
- (id)initWithInputPortTypes:(id)a0 HDRSupported:(char)a1 SISSupported:(char)a2 GNRSISSupported:(char)a3 LTMHDRSupported:(char)a4 depthDataDeliveryEnabled:(char)a5;
- (id)inputForPortType:(id)a0;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end

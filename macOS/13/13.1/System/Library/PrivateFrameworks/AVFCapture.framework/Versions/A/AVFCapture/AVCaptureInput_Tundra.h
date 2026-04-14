@class NSArray, AVCaptureInputInternal_Tundra;

@interface AVCaptureInput_Tundra : NSObject {
    AVCaptureInputInternal_Tundra *_inputInternal;
}

@property (readonly, nonatomic) NSArray *ports;

- (void)dealloc;
- (id)session;
- (void)setSession:(id)a0;
- (id)initSubclass;
- (id)notReadyError;
- (id)applicationAnalytics;
- (void)graphWillStartForSession:(id)a0;
- (void)graphWillStopForSession:(id)a0 error:(id)a1;
- (BOOL)addInputUnitsForInputPort:(id)a0 toGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2 error:(id *)a3;
- (void)removeInputUnitsForInputPort:(id)a0 fromGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2;
- (int)graphNodeForInputPort:(id)a0;
- (unsigned int)unitOutputNumberForInputPort:(id)a0;
- (int)clockProviderNodeForInputPort:(id)a0;
- (void)sessionWillUseOutputDecompressionOptions:(id)a0 forPort:(id)a1;
- (struct OpaqueCMClock { } *)inputClock;

@end

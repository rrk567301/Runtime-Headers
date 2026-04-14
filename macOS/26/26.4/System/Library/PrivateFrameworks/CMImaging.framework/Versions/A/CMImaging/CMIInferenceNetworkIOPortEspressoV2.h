@class NSString;

@interface CMIInferenceNetworkIOPortEspressoV2 : NSObject <CMIInferenceNetworkIOPort>

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long depth;
@property (nonatomic) unsigned long long strideN;
@property (nonatomic) unsigned long long strideH;
@property (nonatomic) unsigned long long strideW;
@property (nonatomic) unsigned long long strideC;
@property (nonatomic) BOOL isInput;
@property (nonatomic) unsigned long long pixelFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (int)_getInfoFromEsop:(struct e5rt_execution_stream_operation { } *)a0 descriptor:(id)a1;

@end

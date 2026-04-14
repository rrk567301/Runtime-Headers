@class NSData, NSMutableDictionary;

@interface GTMTLFXTracingDelegate : NSObject <MTLFXEffectTracingDelegate> {
    NSMutableDictionary *_mtlfxTracingDictionary;
}

@property (nonatomic) unsigned long long functionIndex;
@property (readonly, nonatomic) NSData *mtlfxTracingInfo;

- (id)init;
- (void).cxx_destruct;
- (void)scaler:(id)a0 didCreateBlitCommandEncoder:(id)a1 forEncode:(unsigned long long)a2;
- (void)scaler:(id)a0 didCreateComputeCommandEncoder:(id)a1 forEncode:(unsigned long long)a2;
- (void)scaler:(id)a0 didCreateRenderCommandEncoder:(id)a1 forEncode:(unsigned long long)a2;
- (void)_addEncoderInfo:(unsigned int)a0;

@end

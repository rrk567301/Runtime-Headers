@class NSString;

@interface _MTLFXEffectBase : NSObject {
    unsigned long long _encodeID;
    BOOL _useRefTensors;
    BOOL _dumpTensors;
    NSString *_dumpTensorsDir;
}

@property (readonly) unsigned long long effectID;

- (id)init;
- (void).cxx_destruct;
- (void)_beginEncode;

@end

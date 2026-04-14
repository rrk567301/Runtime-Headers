@interface AUV2BridgeBusArray : AUAudioUnitBusArray

- (BOOL)setBusCount:(unsigned long long)a0 error:(id *)a1;
- (BOOL)isCountChangeable;
- (id)initWithOwner:(id)a0 scope:(unsigned int)a1;

@end

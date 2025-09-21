@interface AUV2BridgeBusArray : AUAudioUnitBusArray

- (id)initWithOwner:(id)a0 scope:(unsigned int)a1;
- (char)isCountChangeable;
- (char)setBusCount:(unsigned long long)a0 error:(id *)a1;

@end

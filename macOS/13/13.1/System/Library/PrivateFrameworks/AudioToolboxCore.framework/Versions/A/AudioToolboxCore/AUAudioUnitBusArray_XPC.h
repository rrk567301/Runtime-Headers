@interface AUAudioUnitBusArray_XPC : AUAudioUnitBusArray {
    BOOL _countWritable;
}

- (id)initWithOwner:(id)a0 scope:(unsigned int)a1 busses:(id)a2 countWritable:(BOOL)a3;
- (BOOL)setBusCount:(unsigned long long)a0 error:(id *)a1;
- (BOOL)isCountChangeable;

@end

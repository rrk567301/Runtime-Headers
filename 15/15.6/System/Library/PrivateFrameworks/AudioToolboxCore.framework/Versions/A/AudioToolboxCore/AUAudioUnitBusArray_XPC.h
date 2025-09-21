@interface AUAudioUnitBusArray_XPC : AUAudioUnitBusArray {
    char _countWritable;
}

- (id)initWithOwner:(id)a0 scope:(unsigned int)a1 busses:(id)a2 countWritable:(char)a3;
- (char)isCountChangeable;
- (char)setBusCount:(unsigned long long)a0 error:(id *)a1;

@end

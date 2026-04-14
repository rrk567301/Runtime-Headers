@class NSString;

@interface UVCFrameProcessorH264Decode : UVCFrameProcessorDecode {
    NSString *_firstKeyframeTime;
    unsigned long long _noOfPframesDropped;
}

- (void).cxx_destruct;
- (id)serialize;
- (id)processingStatus;
- (id)initWithAttributes:(id)a0 destination:(id)a1 queue:(id)a2;
- (void)processStreamData:(id)a0 error:(id)a1 args:(id)a2;
- (BOOL)processElementaryStream:(char *)a0 compressedDataSize:(unsigned long long)a1 spsData:(char **)a2 ppsData:(char **)a3;
- (const struct opaqueCMFormatDescription { } *)createVideoFormatDescriptorFromData:(char *)a0 pps:(char *)a1;
- (BOOL)setupDecompressionSession:(id)a0 error:(id *)a1;

@end

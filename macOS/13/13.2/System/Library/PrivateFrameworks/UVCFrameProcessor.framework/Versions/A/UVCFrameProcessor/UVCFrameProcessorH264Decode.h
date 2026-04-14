@class NSString;

@interface UVCFrameProcessorH264Decode : UVCFrameProcessorDecode {
    NSString *_firstKeyframeTime;
    unsigned long long _noOfPframesDropped;
    BOOL _dispatchFrameSync;
}

- (void).cxx_destruct;
- (id)serialize;
- (BOOL)processElementaryStream:(char *)a0 compressedDataSize:(unsigned long long)a1 spsData:(char **)a2 ppsData:(char **)a3;
- (const struct opaqueCMFormatDescription { } *)createVideoFormatDescriptorFromData:(char *)a0 pps:(char *)a1;
- (BOOL)setupDecompressionSession:(id)a0 error:(id *)a1 handler:(id /* block */)a2;

@end

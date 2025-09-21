@class NSString;

@interface UVCFrameProcessorH265Decode : UVCFrameProcessorDecode {
    NSString *_firstKeyframeTime;
    unsigned long long _noOfPframesDropped;
    BOOL _dispatchFrameSync;
}

- (id)serialize;
- (void).cxx_destruct;
- (struct __CFDictionary { } *)_createPropagatableSEIAttachmentsFromNALUnit:(char *)a0;
- (id)_createSEIAttachmentPayloadFromBytePtr:(const char *)a0 dataSize:(unsigned long long)a1;
- (int)_getSEIUUIDStartByteIndex:(const char *)a0 dataSize:(unsigned long long)a1;
- (struct opaqueCMFormatDescription { } *)createVideoFormatDescriptorFromData:(char *)a0 sps:(char *)a1 pps:(char *)a2;
- (BOOL)processElementaryStream:(char *)a0 compressedDataSize:(unsigned long long)a1 vpsData:(char **)a2 spsData:(char **)a3 ppsData:(char **)a4 seiData:(char **)a5;
- (BOOL)setupDecompressionSession:(id)a0 error:(id *)a1 handler:(id /* block */)a2;

@end

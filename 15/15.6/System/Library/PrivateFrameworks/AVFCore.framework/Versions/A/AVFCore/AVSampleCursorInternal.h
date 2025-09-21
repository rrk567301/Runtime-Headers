@interface AVSampleCursorInternal : NSObject {
    struct OpaqueFigSampleCursor { } *figSampleCursor;
    char implementsGetDecodeTimeStamp;
    char implementsGetDuration;
    char implementsGetDependencyInfo;
    char implementsTestReorderingBoundary;
    char implementsCreateSampleBuffer;
    char implementsCopyChunkDetails;
    char implementsCopySampleLocation;
    char implementsGetMPEG2FrameType;
}

@end

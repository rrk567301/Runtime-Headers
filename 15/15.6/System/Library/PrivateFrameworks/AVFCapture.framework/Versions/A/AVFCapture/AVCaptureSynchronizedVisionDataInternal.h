@interface AVCaptureSynchronizedVisionDataInternal : NSObject {
    struct __CVBuffer { } *visionDataPixelBuffer;
    char visionDataWasDropped;
    long long droppedReason;
}

@end

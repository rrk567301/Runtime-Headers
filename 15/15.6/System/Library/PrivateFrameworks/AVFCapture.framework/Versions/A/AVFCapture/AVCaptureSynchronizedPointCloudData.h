@class AVPointCloudData;

@interface AVCaptureSynchronizedPointCloudData : AVCaptureSynchronizedData {
    AVPointCloudData *_pointCloudData;
    char _pointCloudDataWasDropped;
    long long _droppedReason;
}

@property (readonly) AVPointCloudData *pointCloudData;
@property (readonly) char pointCloudDataWasDropped;
@property (readonly) long long droppedReason;

- (void)dealloc;
- (id)_initWithPointCloudDataBuffer:(id)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 pointCloudDataWasDropped:(char)a2 droppedReason:(long long)a3;

@end

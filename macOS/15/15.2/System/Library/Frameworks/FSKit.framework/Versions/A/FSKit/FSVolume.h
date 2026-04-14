@class FSVolumeIdentifier, FSFileName, NSObject;
@protocol OS_dispatch_queue;

@interface FSVolume : NSObject {
    NSObject<OS_dispatch_queue> *_renameWorkQueue;
}

@property (retain) FSVolumeIdentifier *volumeID;
@property (copy) FSFileName *name;
@property (nonatomic) long long state;
@property (nonatomic) BOOL wasTerminated;
@property (retain) NSObject<OS_dispatch_queue> *globalWorkQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renameWorkQueue;
@property (retain) FSVolumeIdentifier *volumeID;
@property (nonatomic) long long state;
@property (nonatomic) BOOL wasTerminated;
@property (retain) NSObject<OS_dispatch_queue> *globalWorkQueue;
@property (copy) FSFileName *name;

+ (id /* block */)extentPackerForBuffer:(void *)a0 bufLen:(unsigned long long)a1 extentCount:(unsigned int *)a2;
+ (id /* block */)newDirEntryPacker:(void *)a0 bufLen:(unsigned long long)a1 bytesPacked:(unsigned long long *)a2 withAttr:(BOOL)a3;
+ (id)volumeIdentifierDescription:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithVolumeID:(id)a0 volumeName:(id)a1;
- (id)queueForItem:(id)a0;

@end

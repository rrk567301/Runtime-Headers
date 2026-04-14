@class FSVolumeIdentifier, FSFileName;

@interface FSVolume : NSObject

@property (retain) FSVolumeIdentifier *volumeID;
@property (nonatomic) long long state;
@property (nonatomic) BOOL wasTerminated;
@property (copy) FSFileName *name;

- (void).cxx_destruct;
- (id)initWithVolumeID:(id)a0 volumeName:(id)a1;

@end

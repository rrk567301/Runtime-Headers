@class NSString, AFLocationSnapshot, NSNumber;

@interface _AFLocationSnapshotMutation : NSObject <AFLocationSnapshotMutating> {
    AFLocationSnapshot *_base;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSNumber *_altitude;
    NSNumber *_direction;
    NSNumber *_speed;
    NSNumber *_verticalAccuracy;
    NSNumber *_horizontalAccuracy;
    char _preciseLocationEnabled;
    long long _accessState;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasLatitude : 1; unsigned char hasLongitude : 1; unsigned char hasAltitude : 1; unsigned char hasDirection : 1; unsigned char hasSpeed : 1; unsigned char hasVerticalAccuracy : 1; unsigned char hasHorizontalAccuracy : 1; unsigned char hasPreciseLocationEnabled : 1; unsigned char hasAccessState : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)isDirty;
- (void)setDirection:(id)a0;
- (void)setSpeed:(id)a0;
- (void)setAltitude:(id)a0;
- (void)setHorizontalAccuracy:(id)a0;
- (void)setLatitude:(id)a0;
- (void)setLongitude:(id)a0;
- (void)setVerticalAccuracy:(id)a0;
- (void)setPreciseLocationEnabled:(char)a0;
- (void)setAccessState:(long long)a0;
- (long long)getAccessState;
- (id)getAltitude;
- (id)getDirection;
- (id)getHorizontalAccuracy;
- (id)getLatitude;
- (id)getLongitude;
- (char)getPreciseLocationEnabled;
- (id)getSpeed;
- (id)getVerticalAccuracy;
- (id)initWithBase:(id)a0;

@end

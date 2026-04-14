@class NSData;

@interface GCMicroGamepadSnapshot : GCMicroGamepad

@property (copy) NSData *snapshotData;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSnapshotData:(id)a0;
- (id)initWithController:(id)a0 snapshotData:(id)a1;
- (BOOL)supportsDpadTaps;

@end

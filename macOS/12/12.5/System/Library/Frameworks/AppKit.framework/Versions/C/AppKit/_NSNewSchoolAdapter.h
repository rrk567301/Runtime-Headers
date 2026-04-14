@class NSArray;

@interface _NSNewSchoolAdapter : NSSaveAccessoryAdapter

@property (retain, nonatomic) NSArray *trackedConstraints;

- (void)dealloc;
- (void)willRemoveSubview:(id)a0;
- (void)accFrameChanged:(id)a0;
- (void)constrainAccessoryToSelf:(id)a0;
- (void)adapt:(id)a0 andTrackConstraints:(id)a1;

@end

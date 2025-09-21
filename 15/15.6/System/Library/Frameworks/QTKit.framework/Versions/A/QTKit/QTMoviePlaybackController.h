@class NSString;

@interface QTMoviePlaybackController : NSObject <NSUserInterfaceValidations, QTHUDTimelineCellDelegate, NSCoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)keyPathsForValuesAffectingMuted;
+ (id)keyPathsForValuesAffectingVolume;
+ (id)keyPathsForValuesAffectingCurrentTime;
+ (id)keyPathsForValuesAffectingDuration;
+ (id)keyPathsForValuesAffectingNaturalSize;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingRate;
+ (id)keyPathsForValuesAffectingStatusString;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)validateUserInterfaceItem:(id)a0;
- (struct { long long x0; long long x1; long long x2; })timelineCell:(id)a0 willChangeTimeValue:(struct { long long x0; long long x1; long long x2; })a1;

@end

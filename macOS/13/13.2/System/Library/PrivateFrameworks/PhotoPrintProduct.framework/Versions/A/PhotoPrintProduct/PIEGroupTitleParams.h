@class PIEFlags, NSMutableArray;

@interface PIEGroupTitleParams : NSObject {
    PIEFlags *_flags;
    NSMutableArray *_albumsOfInterestIds;
    NSMutableArray *_eventsOfInterestIds;
    NSMutableArray *_personsOfInterestIds;
}

- (void)dealloc;
- (id)init;
- (void)setHint:(int)a0;
- (BOOL)isHintSet:(int)a0;
- (void)unsetHint:(int)a0;
- (void)addAlbumOfInterestWithUID:(id)a0;
- (void)addEventOfInterestWithUID:(id)a0;
- (void)addPersonOfInterestWithUID:(id)a0;
- (id)albumsOfInterestIDs;
- (id)eventsOfInterestIDs;
- (id)personsOfInterestIDs;

@end

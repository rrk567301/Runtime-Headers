@class SHMediaItem, SHMediaLibraryTrack;

@interface SHMediaLibraryTrackUpdate : NSObject

@property (readonly) SHMediaLibraryTrack *trackToUpdate;
@property (readonly) SHMediaItem *updatedMediaItem;

- (void).cxx_destruct;
- (id)initWithTrackToUpdate:(id)a0 updatedMediaItem:(id)a1;

@end

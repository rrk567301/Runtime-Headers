@class SHMediaItem, NSArray, NSError, SHHapticSpatialTrackInformation;

@interface SHHaptic : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *tracks;
@property (readonly) NSError *tracksError;
@property (readonly) SHMediaItem *mediaItem;
@property (readonly) NSArray *spatialOffsets;
@property (readonly) SHHapticSpatialTrackInformation *associatedSpatialTrackInformation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithHapticTracks:(id)a0 representingMediaItem:(id)a1 spatialTrackInformation:(id)a2 error:(id)a3;
- (id)tracksWithError:(id *)a0;

@end

@class AVAssetTrack;

@interface _NUVideoAssetResourceID : _NUAssetResourceID <NUAssetResourceID>

@property (readonly, nonatomic) AVAssetTrack *track;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAssetTrack:(id)a0;

@end

@class AVAssetTrack;

@interface _NUVideoAssetResourceID : _NUAssetResourceID <NUAssetResourceID>

@property (readonly, nonatomic) AVAssetTrack *track;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAssetTrack:(id)a0;

@end

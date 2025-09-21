@interface MRNowPlayingArtwork : NSObject

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) char hasArtworkData;

- (id)copyImageData;

@end

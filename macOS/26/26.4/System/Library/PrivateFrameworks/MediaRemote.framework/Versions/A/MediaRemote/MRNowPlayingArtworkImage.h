@class NSData, NSString;

@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork

@property (readonly, copy, nonatomic) NSData *imageData;
@property (readonly, copy, nonatomic) NSString *mimeType;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasArtworkData;
- (unsigned int)type;
- (id)description;
- (id)copyImageData;
- (id)initWithImageData:(id)a0 mimeType:(id)a1;

@end

@class NSData, NSString;

@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork

@property (readonly, copy, nonatomic) NSData *imageData;
@property (readonly, copy, nonatomic) NSString *mimeType;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned int)type;
- (id)copyImageData;
- (char)hasArtworkData;
- (id)initWithImageData:(id)a0 mimeType:(id)a1;

@end

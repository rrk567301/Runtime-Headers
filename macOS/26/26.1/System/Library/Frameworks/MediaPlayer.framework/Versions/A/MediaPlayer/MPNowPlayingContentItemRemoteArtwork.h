@class MRRemoteArtwork, NSString, NSData;

@interface MPNowPlayingContentItemRemoteArtwork : NSObject

@property (readonly, nonatomic) MRRemoteArtwork *mediaRemoteRemoteArtwork;
@property (readonly, nonatomic) NSString *artworkURLString;
@property (readonly, nonatomic) NSData *artworkURLTemplateData;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithArtworkURLString:(id)a0 templateData:(id)a1;
- (id)initWithMediaRemoteRemoteArtwork:(id)a0;

@end

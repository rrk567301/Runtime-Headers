@class NSString, NSData;

@interface MPNowPlayingContentItemRemoteArtwork : NSObject

@property (readonly, nonatomic) NSString *artworkURLString;
@property (readonly, nonatomic) NSData *artworkURLTemplateData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithArtworkURLString:(id)a0 templateData:(id)a1;

@end

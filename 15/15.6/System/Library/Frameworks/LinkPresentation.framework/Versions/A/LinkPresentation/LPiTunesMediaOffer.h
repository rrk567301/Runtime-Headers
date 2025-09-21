@class NSURL, NSString;

@interface LPiTunesMediaOffer : NSObject

@property (readonly, copy, nonatomic) NSURL *previewURL;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic) char hasAudio;
@property (readonly, nonatomic) char hasVideo;

+ (char)hasAudioForOffer:(id)a0;
+ (char)hasVideoForOffer:(id)a0;
+ (id)previewURLForOffer:(id)a0;
+ (id)typeForOffer:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end

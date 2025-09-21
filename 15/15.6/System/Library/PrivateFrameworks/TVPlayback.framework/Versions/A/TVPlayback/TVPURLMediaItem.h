@class NSURL, NSSet;

@interface TVPURLMediaItem : TVPBaseMediaItem

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSSet *traits;

- (id)init;
- (void).cxx_destruct;
- (char)isEqualToMediaItem:(id)a0;
- (char)hasTrait:(id)a0;
- (id)initWithURL:(id)a0 traits:(id)a1;
- (id)mediaItemURL;

@end

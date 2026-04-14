@class NSURL, NSSet;

@interface TVPURLMediaItem : TVPBaseMediaItem

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSSet *traits;

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 traits:(id)a1;
- (id)mediaItemURL;
- (BOOL)isEqualToMediaItem:(id)a0;
- (BOOL)hasTrait:(id)a0;

@end

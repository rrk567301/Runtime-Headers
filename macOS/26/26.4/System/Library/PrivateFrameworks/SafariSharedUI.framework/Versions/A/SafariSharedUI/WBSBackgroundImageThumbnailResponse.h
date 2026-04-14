@class NSArray;

@interface WBSBackgroundImageThumbnailResponse : WBSSiteMetadataResponse

@property (readonly, copy, nonatomic) NSArray *images;
@property (readonly, nonatomic) long long selectedIndex;

- (void).cxx_destruct;
- (id)initWithImages:(id)a0 selectedIndex:(long long)a1;

@end

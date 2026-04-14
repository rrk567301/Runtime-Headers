@class NSString, NSArray;

@interface PRSFUSEAlbumListCardSection : PRSBaseCardSection

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *albums;

+ (BOOL)isAlbum:(id)a0;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithSFSearchResult:(id)a0 cardSection:(id)a1;
- (id)initWithTitle:(id)a0 albums:(id)a1;

@end

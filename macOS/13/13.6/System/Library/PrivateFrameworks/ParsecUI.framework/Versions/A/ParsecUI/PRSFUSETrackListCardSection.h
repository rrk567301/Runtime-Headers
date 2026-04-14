@class NSString, NSArray;

@interface PRSFUSETrackListCardSection : PRSBaseCardSection

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *tracks;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithSFSearchResult:(id)a0 cardSection:(id)a1;
- (id)initWithTitle:(id)a0 tracks:(id)a1;

@end

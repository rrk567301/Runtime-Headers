@class NSArray;

@interface PRSTrackListCardSection : PRSBaseCardSection

@property (readonly, nonatomic) NSArray *tracks;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithSFSearchResult:(id)a0 cardSection:(id)a1;
- (id)initWithTracks:(id)a0;

@end

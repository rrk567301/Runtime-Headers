@class NSArray;

@interface PRSTrackListCardSection : PRSBaseCardSection

@property (readonly, nonatomic) NSArray *tracks;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithTracks:(id)a0;
- (id)initWithSFSearchResult:(id)a0 cardSection:(id)a1;

@end

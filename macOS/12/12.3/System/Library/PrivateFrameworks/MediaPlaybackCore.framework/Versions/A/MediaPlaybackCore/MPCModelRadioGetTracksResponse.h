@class MPSectionedCollection;

@interface MPCModelRadioGetTracksResponse : NSObject

@property (readonly, nonatomic) long long tracklistAction;
@property (readonly, copy, nonatomic) MPSectionedCollection *tracks;
@property (readonly, nonatomic) double networkingTime;

- (void).cxx_destruct;
- (id)initWithTracks:(id)a0 tracklistAction:(long long)a1 networkingTime:(double)a2;

@end

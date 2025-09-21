@class NSMutableArray;

@interface RegionStats : NSObject

@property (nonatomic) char is_third_party_region;
@property (nonatomic) unsigned long long total_frames;
@property (nonatomic) unsigned long long total_exact_matches;
@property (nonatomic) unsigned long long total_approximate_matches;
@property (retain, nonatomic) NSMutableArray *total_distance_percentage_match_histogram;
@property (nonatomic) char determined_signature_boundary;

- (id)init;
- (void).cxx_destruct;

@end

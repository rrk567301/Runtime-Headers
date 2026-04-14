@class NSArray, NSDate;

@interface CLSNowPlayingStreamSession : NSObject

@property (copy, nonatomic) NSArray *events;
@property (readonly, nonatomic) NSDate *localStartDate;
@property (readonly, nonatomic) NSDate *localEndDate;

+ (id)playbackStreamSessionDateSortDescriptors;

- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithEvents:(id)a0;
- (id)initWithDataCluster:(id)a0;

@end

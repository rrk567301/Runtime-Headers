@class NSString, WLKChannelsResponse;

@interface WLKChannelsRequestOperation : WLKUTSNetworkRequestOperation

@property (copy, nonatomic) NSString *caller;
@property (nonatomic) char filtered;
@property (retain, nonatomic) WLKChannelsResponse *channelsResponse;

- (void).cxx_destruct;
- (id)initWithCaller:(id)a0;
- (void)processResponse;
- (id)initWithCaller:(id)a0 isFilteredByUserChannels:(char)a1;

@end

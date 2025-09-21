@class NSString;

@interface WLKPlayActivityDecorateLiveOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSString *channelID;
@property (readonly, copy, nonatomic) NSString *serviceID;
@property (readonly, copy, nonatomic) NSString *playablePassthrough;

- (void).cxx_destruct;
- (id)initWithChannelID:(id)a0 serviceID:(id)a1 playablePassthrough:(id)a2;

@end

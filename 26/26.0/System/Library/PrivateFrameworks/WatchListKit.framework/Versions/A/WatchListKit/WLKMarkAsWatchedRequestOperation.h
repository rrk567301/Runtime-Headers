@class NSString;

@interface WLKMarkAsWatchedRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSString *itemID;
@property (readonly, copy, nonatomic) NSString *brandID;

- (id)initWithItemID:(id)a0;
- (void).cxx_destruct;

@end

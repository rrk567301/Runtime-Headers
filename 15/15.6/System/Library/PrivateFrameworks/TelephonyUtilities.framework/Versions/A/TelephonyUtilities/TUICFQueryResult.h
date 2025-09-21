@interface TUICFQueryResult : NSObject

@property (nonatomic) char allowCallForDestinationID;
@property (nonatomic, getter=isFromBlockList) char fromBlockList;

- (id)description;

@end

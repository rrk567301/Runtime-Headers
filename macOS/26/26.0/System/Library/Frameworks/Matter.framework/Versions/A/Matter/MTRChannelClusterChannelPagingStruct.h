@class MTRChannelClusterPageTokenStruct;

@interface MTRChannelClusterChannelPagingStruct : NSObject <NSCopying>

@property (copy, nonatomic) MTRChannelClusterPageTokenStruct *previousToken;
@property (copy, nonatomic) MTRChannelClusterPageTokenStruct *nextToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end

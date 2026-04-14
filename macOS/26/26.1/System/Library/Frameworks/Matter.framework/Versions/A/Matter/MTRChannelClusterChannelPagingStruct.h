@class MTRChannelClusterPageTokenStruct;

@interface MTRChannelClusterChannelPagingStruct : NSObject <NSCopying>

@property (copy, nonatomic) MTRChannelClusterPageTokenStruct *previousToken;
@property (copy, nonatomic) MTRChannelClusterPageTokenStruct *nextToken;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end

@class MTRChannelClusterPageTokenStruct;

@interface MTRChannelClusterChannelPagingStruct : NSObject <NSCopying>

@property (copy, nonatomic) MTRChannelClusterPageTokenStruct *previousToken;
@property (copy, nonatomic) MTRChannelClusterPageTokenStruct *nextToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

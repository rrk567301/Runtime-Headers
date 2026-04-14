@class NSString;

@interface MTRChannelClusterSeriesInfoStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *season;
@property (copy, nonatomic) NSString *episode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end

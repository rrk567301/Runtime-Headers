@class NSString;

@interface MTRChannelClusterSeriesInfoStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *season;
@property (copy, nonatomic) NSString *episode;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

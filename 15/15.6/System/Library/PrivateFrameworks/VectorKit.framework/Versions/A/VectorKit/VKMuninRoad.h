@class NSString;

@interface VKMuninRoad : NSObject

@property (readonly, nonatomic) NSString *roadName;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocalizedName:(const char *)a0;
- (id)initWithMuninRoadEdge:(const void *)a0 localize:(char)a1;

@end

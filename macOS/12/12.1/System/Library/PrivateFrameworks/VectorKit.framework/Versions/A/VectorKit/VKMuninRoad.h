@class NSString;

@interface VKMuninRoad : NSObject

@property (readonly, nonatomic) NSString *roadName;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithLocalizedName:(const char *)a0;
- (id)initWithMuninRoadEdge:(const void *)a0 localize:(BOOL)a1;

@end

@class NSString, NSMutableArray;

@interface VKMuninJunction : NSObject

@property (readonly, nonatomic) NSMutableArray *roads;
@property (readonly, nonatomic) NSString *name;

- (void)dealloc;
- (id)description;
- (id)initWithMuninJunction:(const void *)a0 localize:(BOOL)a1;

@end

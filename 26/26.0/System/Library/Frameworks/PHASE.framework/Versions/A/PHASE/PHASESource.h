@class NSArray;

@interface PHASESource : PHASEObject

@property (nonatomic) double dopplerFactor;
@property (nonatomic) void /* unknown type, empty encoding */ velocity;
@property (nonatomic) double gain;
@property (readonly, copy, nonatomic) NSArray *shapes;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithEngine:(id)a0;
- (void).cxx_destruct;
- (id)initWithEngine:(id)a0 shapes:(id)a1;

@end

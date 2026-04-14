@interface CGVirtualDisplayMode : NSObject

@property (readonly, nonatomic) unsigned int width;
@property (readonly, nonatomic) unsigned int height;
@property (readonly, nonatomic) double refreshRate;

- (id)initWithWidth:(unsigned int)a0 height:(unsigned int)a1 refreshRate:(double)a2;

@end

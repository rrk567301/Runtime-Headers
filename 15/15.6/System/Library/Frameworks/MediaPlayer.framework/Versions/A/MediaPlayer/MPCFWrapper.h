@interface MPCFWrapper : NSObject

@property (nonatomic, getter=isNullRef) char nullRef;
@property (readonly, nonatomic) void *refValue;

- (void)dealloc;
- (id)description;
- (id)initWithCFType:(void *)a0;

@end

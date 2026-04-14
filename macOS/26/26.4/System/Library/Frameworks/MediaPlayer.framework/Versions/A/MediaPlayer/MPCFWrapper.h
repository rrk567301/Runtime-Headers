@interface MPCFWrapper : NSObject

@property (nonatomic, getter=isNullRef) BOOL nullRef;
@property (readonly, nonatomic) void *refValue;

- (id)description;
- (void)dealloc;
- (id)initWithCFType:(void *)a0;

@end

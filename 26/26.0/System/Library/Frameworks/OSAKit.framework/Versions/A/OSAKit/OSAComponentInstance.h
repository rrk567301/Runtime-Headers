@interface OSAComponentInstance : NSObject

@property (readonly) struct ComponentInstanceRecord { long long x0[1]; } *componentInstance;

+ (id)newWithComponentInstance:(struct ComponentInstanceRecord { long long x0[1]; } *)a0;

- (void)finalize;
- (void)dealloc;
- (id)initWithComponentInstance:(struct ComponentInstanceRecord { long long x0[1]; } *)a0;

@end

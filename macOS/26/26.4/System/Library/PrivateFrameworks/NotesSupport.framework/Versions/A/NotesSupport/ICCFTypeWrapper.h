@interface ICCFTypeWrapper : NSObject

@property (nonatomic) void *cfTypeRef;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void *)ref;
- (id)initWithCFTypeRef:(void *)a0;

@end

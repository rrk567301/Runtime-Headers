@interface ICCFTypeWrapper : NSObject

@property (nonatomic) void *cfTypeRef;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (void *)ref;
- (id)initWithCFTypeRef:(void *)a0;

@end

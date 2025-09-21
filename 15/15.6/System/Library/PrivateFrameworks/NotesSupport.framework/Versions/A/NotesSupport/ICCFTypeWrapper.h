@interface ICCFTypeWrapper : NSObject

@property (nonatomic) void *cfTypeRef;

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void *)ref;
- (id)initWithCFTypeRef:(void *)a0;

@end

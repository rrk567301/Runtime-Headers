@class NSString, MTLCompileOptions;

@interface MTL4LibraryDescriptor : NSObject <NSCopying>

@property (copy) NSString *source;
@property (copy) MTLCompileOptions *options;
@property (copy) NSString *name;

- (unsigned long long)hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end

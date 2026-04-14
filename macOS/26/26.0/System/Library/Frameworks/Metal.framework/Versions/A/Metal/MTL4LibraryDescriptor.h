@class NSString, MTLCompileOptions;

@interface MTL4LibraryDescriptor : NSObject <NSCopying>

@property (copy) NSString *source;
@property (copy) MTLCompileOptions *options;
@property (copy) NSString *name;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end

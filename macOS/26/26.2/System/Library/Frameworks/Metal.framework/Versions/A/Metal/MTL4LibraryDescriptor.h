@class NSString, MTLCompileOptions;

@interface MTL4LibraryDescriptor : NSObject <NSCopying>

@property (copy) NSString *source;
@property (copy) MTLCompileOptions *options;
@property (copy) NSString *name;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)dealloc;

@end

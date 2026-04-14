@class NSString, MTLCompileOptions;

@interface MTL4LibraryDescriptor : NSObject <NSCopying>

@property (copy) NSString *source;
@property (copy) MTLCompileOptions *options;
@property (copy) NSString *name;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end

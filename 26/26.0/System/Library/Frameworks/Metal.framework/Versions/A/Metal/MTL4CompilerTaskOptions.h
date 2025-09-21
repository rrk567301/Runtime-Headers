@class NSArray;

@interface MTL4CompilerTaskOptions : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *lookupArchives;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end

@class NSArray;

@interface MTL4CompilerTaskOptions : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *lookupArchives;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)dealloc;

@end

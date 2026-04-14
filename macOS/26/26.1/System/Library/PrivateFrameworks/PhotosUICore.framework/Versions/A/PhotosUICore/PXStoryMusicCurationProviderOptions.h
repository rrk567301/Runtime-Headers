@class NSSet;

@interface PXStoryMusicCurationProviderOptions : NSObject <NSCopying>

@property (copy, nonatomic) NSSet *categories;
@property (nonatomic) unsigned long long logContext;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)addCategory:(id)a0;

@end

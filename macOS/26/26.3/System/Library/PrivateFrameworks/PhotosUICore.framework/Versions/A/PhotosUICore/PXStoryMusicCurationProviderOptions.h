@class NSSet;

@interface PXStoryMusicCurationProviderOptions : NSObject <NSCopying>

@property (copy, nonatomic) NSSet *categories;
@property (nonatomic) unsigned long long logContext;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addCategory:(id)a0;

@end

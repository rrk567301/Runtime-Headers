@class NSURL;

@interface FCMultiSizeVideo : NSObject <NSCopying>

@property (readonly, nonatomic) NSURL *small;
@property (readonly, nonatomic) NSURL *large;

- (id)initWithConfigDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSmallVideoURL:(id)a0 largeVideoURL:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;

@end

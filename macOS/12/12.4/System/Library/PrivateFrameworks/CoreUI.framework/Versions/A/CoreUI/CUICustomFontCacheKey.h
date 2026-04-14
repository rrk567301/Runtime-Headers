@class NSString;

@interface CUICustomFontCacheKey : NSObject <NSCopying> {
    NSString *_name;
    double _pointSize;
    unsigned long long _hash;
    BOOL _hasHash;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) double pointSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end

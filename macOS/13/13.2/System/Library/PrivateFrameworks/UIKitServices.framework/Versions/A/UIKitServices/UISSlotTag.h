@interface UISSlotTag : NSObject <NSCopying>

@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (unsigned long long)cacheLimit;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)resolvedStyleForStyle:(id)a0;
- (unsigned long long)authenticationMessageContextForStyle:(id)a0;
- (unsigned long long)failGradeForStyle:(id)a0;
- (unsigned int)secureNameForStyle:(id)a0;
- (unsigned long long)hitTestInformationMaskForStyle:(id)a0;

@end

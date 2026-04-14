@class NSArray;

@interface VIScenenetAnnotation : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *annotations;
@property (readonly, nonatomic) unsigned long long revision;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithAnnotations:(id)a0 revision:(unsigned long long)a1;

@end

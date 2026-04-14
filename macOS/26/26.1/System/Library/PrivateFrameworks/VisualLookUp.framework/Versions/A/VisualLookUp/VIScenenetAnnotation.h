@class NSArray;

@interface VIScenenetAnnotation : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *annotations;
@property (readonly, nonatomic) unsigned long long revision;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithAnnotations:(id)a0 revision:(unsigned long long)a1;

@end

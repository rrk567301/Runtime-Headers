@class NSDictionary;

@interface TIProactiveTrigger : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned char triggerSourceType;
@property (readonly, nonatomic) NSDictionary *attributes;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSourceType:(unsigned char)a0 attributes:(id)a1;

@end

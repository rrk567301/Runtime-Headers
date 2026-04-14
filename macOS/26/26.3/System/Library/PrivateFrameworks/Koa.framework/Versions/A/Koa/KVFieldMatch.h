@class SEMFieldMatch;

@interface KVFieldMatch : NSObject <NSCopying>

@property (readonly, nonatomic) SEMFieldMatch *fieldMatch;

- (id)description;
- (long long)fieldType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)fieldSpanValue;
- (id)fieldSpanInfo;
- (id)initWithFieldMatch:(id)a0;
- (BOOL)isEqualToFieldMatch:(id)a0;
- (BOOL)isLabelMatch;
- (BOOL)isValueMatch;

@end

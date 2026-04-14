@class SEMFieldMatch;

@interface KVFieldMatch : NSObject <NSCopying>

@property (readonly, nonatomic) SEMFieldMatch *fieldMatch;

- (long long)fieldType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)fieldSpanValue;
- (id)fieldSpanInfo;
- (id)initWithFieldMatch:(id)a0;
- (BOOL)isEqualToFieldMatch:(id)a0;
- (BOOL)isLabelMatch;
- (BOOL)isValueMatch;

@end

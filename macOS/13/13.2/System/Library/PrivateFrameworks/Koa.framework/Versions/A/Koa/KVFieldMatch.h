@class KVSpanInfo;

@interface KVFieldMatch : NSObject <NSCopying> {
    KVSpanInfo *_spanInfo;
    long long _fieldType;
    unsigned char _fieldComponent;
}

+ (id)valueMatchWithFieldType:(long long)a0 spanInfo:(id)a1;
+ (id)labelMatchWithFieldType:(long long)a0 spanInfo:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (long long)fieldType;
- (unsigned char)fieldComponent;
- (id)initWithSpanInfo:(id)a0 fieldType:(long long)a1 fieldComponent:(unsigned char)a2;
- (id)fieldSpanInfo;
- (id)fieldSpanValue;
- (BOOL)isValueMatch;
- (BOOL)isLabelMatch;
- (BOOL)isEqualToSpanMatchField:(id)a0;

@end

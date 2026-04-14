@class KVSpanInfo;

@interface KVFieldMatch : NSObject <NSCopying> {
    KVSpanInfo *_spanInfo;
    long long _fieldType;
    unsigned char _fieldComponent;
}

+ (id)labelMatchWithFieldType:(long long)a0 spanInfo:(id)a1;
+ (id)valueMatchWithFieldType:(long long)a0 spanInfo:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)fieldType;
- (unsigned char)fieldComponent;
- (id)fieldSpanInfo;
- (id)fieldSpanValue;
- (id)initWithSpanInfo:(id)a0 fieldType:(long long)a1 fieldComponent:(unsigned char)a2;
- (BOOL)isEqualToSpanMatchField:(id)a0;
- (BOOL)isLabelMatch;
- (BOOL)isValueMatch;

@end

@class NSObject, SEMSpanInfo;
@protocol SEMEntityFieldInfo;

@interface SEMFieldMatch : NSObject <NSCopying> {
    SEMSpanInfo *_spanInfo;
    NSObject<SEMEntityFieldInfo> *_entityFieldInfo;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)entityFieldInfo;
- (id)fieldSpanInfo;
- (id)fieldSpanValue;
- (id)initWithSpanInfo:(id)a0 entityFieldInfo:(id)a1;
- (BOOL)isEqualToSpanMatchField:(id)a0;

@end

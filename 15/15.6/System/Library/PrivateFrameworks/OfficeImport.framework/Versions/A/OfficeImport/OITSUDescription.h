@class NSString, NSMutableDictionary, NSObject, NSMutableArray;

@interface OITSUDescription : NSObject {
    NSObject *_object;
    Class _class;
    void *_cfType;
    NSString *_header;
    NSMutableDictionary *_fields;
    NSMutableArray *_fieldOrder;
    unsigned long long _fieldNameWidth;
    char _commaSeparated;
}

+ (id)descriptionWithCFType:(void *)a0 format:(id)a1;
+ (id)descriptionWithObject:(id)a0;
+ (id)descriptionWithObject:(id)a0 class:(Class)a1;
+ (id)descriptionWithObject:(id)a0 class:(Class)a1 format:(id)a2;
+ (id)descriptionWithObject:(id)a0 format:(id)a1;

- (void)dealloc;
- (id)initWithObject:(id)a0;
- (id)descriptionString;
- (void)addField:(id)a0 value:(id)a1;
- (void)addField:(id)a0 format:(id)a1;
- (void)addFieldValue:(id)a0;
- (void)addFieldWithFormat:(id)a0;
- (void)addSuperDescription;
- (id)initWithCFType:(void *)a0 header:(id)a1;
- (id)initWithObject:(id)a0 class:(Class)a1 format:(id)a2;
- (id)initWithObject:(id)a0 class:(Class)a1 format:(id)a2 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a3;
- (id)initWithObject:(id)a0 class:(Class)a1 header:(id)a2;
- (id)initWithObject:(id)a0 format:(id)a1;
- (id)p_header;
- (void)setFieldOptionCommaSeparated;

@end

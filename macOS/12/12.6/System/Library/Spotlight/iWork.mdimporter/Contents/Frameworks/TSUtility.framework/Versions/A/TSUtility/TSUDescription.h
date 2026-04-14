@class NSString, NSMutableDictionary, NSObject, NSMutableArray;

@interface TSUDescription : NSObject {
    NSObject *_object;
    Class _class;
    void *_cfType;
    NSString *_header;
    NSMutableDictionary *_fields;
    NSMutableArray *_fieldOrder;
    unsigned long long _fieldNameWidth;
    BOOL _commaSeparated;
}

@property (readonly, copy, nonatomic) NSString *descriptionString;

+ (id)descriptionWithObject:(id)a0 format:(id)a1;
+ (id)descriptionWithObject:(id)a0 class:(Class)a1 format:(id)a2;
+ (id)descriptionWithCFType:(void *)a0 format:(id)a1;
+ (id)descriptionWithObject:(id)a0;
+ (id)descriptionWithObject:(id)a0 class:(Class)a1;
+ (unsigned long long)pushDescriptionDepth;
+ (unsigned long long)peekDescriptionDepth;
+ (unsigned long long)popDescriptionDepth;

- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0 class:(Class)a1 header:(id)a2;
- (id)initWithObject:(id)a0 class:(Class)a1 format:(id)a2 arguments:(char *)a3;
- (id)initWithObject:(id)a0 class:(Class)a1 format:(id)a2;
- (id)initWithCFType:(void *)a0 header:(id)a1;
- (void)addFieldWithFormat:(id)a0;
- (id)p_header;
- (id)initWithObject:(id)a0 format:(id)a1;
- (void)addField:(id)a0 format:(id)a1;
- (void)addSuperDescription;
- (void)setFieldOptionCommaSeparated;
- (void)addField:(id)a0 value:(id)a1;
- (void)addFieldValue:(id)a0;

@end

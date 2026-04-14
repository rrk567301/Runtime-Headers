@class RMModelStatusSchema;

@interface RMModelStatusDynamic : RMModelStatusBase

@property (retain, nonatomic) RMModelStatusSchema *schema;

+ (id)buildWithStatusItemType:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSchema:(id)a0;
- (BOOL)isArrayValue;
- (id)statusItemType;

@end

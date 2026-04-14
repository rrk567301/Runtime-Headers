@class NSString;

@interface XQueryTypeDeclaration : XQueryExpr <XQueryExprBehavior> {
    long long _type;
    int _occuranceType;
    id _data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attribute:(id)a0;
+ (id)item;
+ (id)empty;
+ (id)comment;
+ (id)text;
+ (id)anyKind;
+ (id)atomic:(id)a0;
+ (id)pi:(id)a0;
+ (id)document:(id)a0;
+ (id)element:(id)a0;

- (void)finalize;
- (long long)type;
- (id)data;
- (id)initWithType:(long long)a0 data:(id)a1;
- (void)dealloc;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;
- (int)occuranceType;
- (void)setOccuranceType:(int)a0;

@end

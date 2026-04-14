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

+ (id)item;
+ (id)empty;
+ (id)attribute:(id)a0;
+ (id)comment;
+ (id)text;
+ (id)anyKind;
+ (id)atomic:(id)a0;
+ (id)pi:(id)a0;
+ (id)document:(id)a0;
+ (id)element:(id)a0;

- (void)finalize;
- (void)dealloc;
- (long long)type;
- (id)initWithType:(long long)a0 data:(id)a1;
- (id)data;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;
- (int)occuranceType;
- (void)setOccuranceType:(int)a0;

@end

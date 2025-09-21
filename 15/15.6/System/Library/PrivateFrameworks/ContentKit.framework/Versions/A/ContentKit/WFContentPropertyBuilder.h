@class NSString, NSNumber, NSArray;
@protocol WFContentPropertyPossibleValuesGetter, WFPropertyListObject;

@interface WFContentPropertyBuilder : NSObject

@property (copy, nonatomic) NSString *keyPath;
@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) id /* block */ setterBlock;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) Class propertyClass;
@property (copy, nonatomic) NSNumber *multipleValues;
@property (copy, nonatomic) NSNumber *filterable;
@property (copy, nonatomic) NSNumber *sortable;
@property (copy, nonatomic) NSNumber *gettable;
@property (copy, nonatomic) NSNumber *settable;
@property (copy, nonatomic) NSNumber *appendable;
@property (copy, nonatomic) NSNumber *removable;
@property (copy, nonatomic) NSNumber *primary;
@property (copy, nonatomic) NSArray *allowedOperators;
@property (copy, nonatomic) id<WFPropertyListObject> userInfo;
@property (retain, nonatomic) id<WFContentPropertyPossibleValuesGetter> possibleValuesGetter;
@property (copy, nonatomic) NSNumber *caseInsensitive;
@property (copy, nonatomic) NSString *negativeName;
@property (copy, nonatomic) NSString *singularItemName;
@property (nonatomic, getter=isIrrational) char irrational;
@property (copy, nonatomic) NSNumber *tense;
@property (copy, nonatomic) NSNumber *timeUnits;
@property (copy, nonatomic) NSNumber *comparableUnits;
@property (copy, nonatomic) NSString *measurementUnitType;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSNumber *canLowercaseName;

+ (id)keyPath:(id)a0 setterBlock:(id /* block */)a1 name:(id)a2 class:(Class)a3;
+ (id)block:(id /* block */)a0 name:(id)a1 class:(Class)a2;
+ (id)block:(id /* block */)a0 setterBlock:(id /* block */)a1 name:(id)a2 class:(Class)a3;
+ (id)keyPath:(id)a0 name:(id)a1 class:(Class)a2;

- (void).cxx_destruct;
- (id)build;
- (id)displayName:(id)a0;
- (id)multipleValues:(char)a0;
- (id)possibleValues:(id)a0;
- (id)allowedOperators:(id)a0;
- (id)appendable:(char)a0;
- (id)canLowercaseName:(char)a0;
- (id)caseInsensitive:(char)a0;
- (id)comparableUnits:(unsigned long long)a0;
- (id)filterable:(char)a0;
- (id)gettable:(char)a0;
- (id)irrational:(char)a0;
- (id)measurementUnitType:(id)a0;
- (id)negativeName:(id)a0;
- (id)possibleValuesAsynchronousGetter:(id /* block */)a0;
- (id)possibleValuesGetter:(id /* block */)a0;
- (id)primary:(char)a0;
- (id)removable:(char)a0;
- (id)setterBlock:(id /* block */)a0;
- (id)singularItemName:(id)a0;
- (id)sortable:(char)a0;
- (id)tense:(unsigned long long)a0;
- (id)timeUnits:(unsigned long long)a0;
- (id)userInfo:(id)a0;

@end

@class NSArray, NSSet, NSString;
@protocol WFContentPropertyPossibleValuesGetter, WFPropertyListObject;

@interface WFContentProperty : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *possibleLabels;
@property (readonly, copy, nonatomic) NSSet *allowedTransactionModes;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly, copy, nonatomic) id /* block */ setterBlock;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *localizedSingularItemName;
@property (readonly, copy, nonatomic) NSString *singularItemName;
@property (readonly, nonatomic) char canLowercaseName;
@property (readonly, nonatomic) Class propertyClass;
@property (readonly, nonatomic) Class valueItemClass;
@property (readonly, nonatomic) char multipleValues;
@property (readonly, nonatomic, getter=isFilterable) char filterable;
@property (readonly, nonatomic, getter=isSortable) char sortable;
@property (readonly, nonatomic, getter=isGettable) char gettable;
@property (readonly, nonatomic, getter=isSettable) char settable;
@property (readonly, nonatomic, getter=isAppendable) char appendable;
@property (readonly, nonatomic, getter=isRemovable) char removable;
@property (readonly, nonatomic, getter=isPrimary) char primary;
@property (readonly, copy, nonatomic) NSArray *allowedOperators;
@property (readonly, copy, nonatomic) id<WFPropertyListObject> userInfo;
@property (readonly, nonatomic) char hasPossibleValues;
@property (readonly, nonatomic) id<WFContentPropertyPossibleValuesGetter> possibleValues;
@property (readonly, nonatomic) char caseInsensitive;
@property (readonly, nonatomic) char hasNegative;
@property (readonly, copy, nonatomic) NSString *negativeName;
@property (readonly, copy, nonatomic) NSString *localizedNegativeName;
@property (readonly, nonatomic, getter=isIrrational) char irrational;
@property (readonly, nonatomic) unsigned long long tense;
@property (readonly, nonatomic) unsigned long long timeUnits;
@property (readonly, nonatomic) unsigned long long comparableUnits;
@property (readonly, nonatomic) NSString *measurementUnitType;
@property (readonly, nonatomic, getter=isLabeledValue) char labeledValue;
@property (readonly, nonatomic) NSString *displayName;

+ (id)possibleLabelsForClass:(Class)a0 localized:(char)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)localizedNameWithContext:(id)a0;
- (void)setPossibleValues:(id)a0;
- (unsigned long long)equivalentHash;
- (void)getValueForObject:(id)a0 completionHandler:(id /* block */)a1;
- (void)getValuesForObject:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithKeyPath:(id)a0 block:(id /* block */)a1 setterBlock:(id /* block */)a2 name:(id)a3 propertyClass:(Class)a4 multipleValues:(char)a5 filterable:(char)a6 sortable:(char)a7 gettable:(char)a8 settable:(char)a9 appendable:(char)a10 removable:(char)a11 primary:(char)a12 allowedOperators:(id)a13 userInfo:(id)a14 possibleValues:(id)a15 caseInsensitive:(char)a16 negativeName:(id)a17 singularItemName:(id)a18 irrational:(char)a19 tense:(unsigned long long)a20 timeUnits:(unsigned long long)a21 comparableUnits:(unsigned long long)a22 measurementUnitType:(id)a23 displayName:(id)a24 canLowercaseName:(char)a25;
- (char)isEquivalentToProperty:(id)a0;
- (id)preferredTransactionModeWithCurrentMode:(id)a0;
- (void)updateWithValue:(id)a0 withTransaction:(id)a1 completion:(id /* block */)a2;

@end

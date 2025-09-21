@class NSString, CKOrderedDictionary;

@interface CKObjectDescription : NSObject

@property (readonly, nonatomic) char redact;
@property (readonly, nonatomic) char avoidShortDescription;
@property (retain, nonatomic) NSString *descriptionPrefix;
@property (retain, nonatomic) CKOrderedDictionary *orderedDictionary;
@property (nonatomic) char printAsDictionary;

- (id)description;
- (void).cxx_destruct;
- (id)unorderedDictionary;
- (void)addProperty:(id)a0 value:(id)a1 shouldRedact:(char)a2;
- (id)_arrayDescription:(id)a0 shouldRedact:(char)a1;
- (void)_addProperty:(id)a0 value:(id)a1 shouldRedact:(char)a2;
- (id)_dictionaryDescription:(id)a0 shouldRedact:(char)a1;
- (id)_propertyDescriptionForProperty:(id)a0 shouldRedact:(char)a1;
- (void)addBooleanProperty:(id)a0 value:(char)a1;
- (void)addBooleanProperty:(id)a0 value:(char)a1 defaultValue:(long long)a2;
- (void)addFlagsForKey:(id)a0 flagsAndConditions:(id)a1;
- (void)addPropertyIfExists:(id)a0 value:(id)a1 shouldRedact:(char)a2;
- (id)initWithObject:(id)a0 redact:(char)a1;
- (id)initWithObject:(id)a0 redact:(char)a1 avoidShortDescription:(char)a2;

@end

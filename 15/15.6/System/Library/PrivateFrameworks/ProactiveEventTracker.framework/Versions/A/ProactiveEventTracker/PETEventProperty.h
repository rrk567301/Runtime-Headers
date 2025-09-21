@class NSString;

@interface PETEventProperty : NSObject

@property (readonly, nonatomic) unsigned long long cardinality;
@property (readonly, nonatomic) NSString *longestValueString;
@property (readonly, nonatomic) NSString *name;

+ (id)freeValuedPropertyWithName:(id)a0;
+ (id)propertyWithName:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 clampValues:(char)a2;
+ (id)propertyWithName:(id)a0 enumMapping:(id)a1;
+ (id)propertyWithName:(id)a0 enumMapping:(id)a1 autoSanitizeValues:(char)a2;
+ (id)propertyWithName:(id)a0 possibleValues:(id)a1;
+ (id)propertyWithName:(id)a0 possibleValues:(id)a1 autoSanitizeValues:(char)a2;
+ (id)propertyWithName:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)propertyWithName:(id)a0 rangeMin:(unsigned long long)a1 rangeMax:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)possibleValues;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (char)isValidValue:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })validRange;

@end

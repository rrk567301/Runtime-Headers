@class NSString, NSMutableArray;

@interface CALProperty : NSObject <NSCoding> {
    NSString *_name;
    NSMutableArray *_values;
    NSMutableArray *_changelist;
    int _status;
}

+ (id)propertyWithName:(id)a0 withPropertyValue:(id)a1;
+ (id)propertyWithName:(id)a0 withValue:(id)a1 withType:(int)a2;
+ (id)propertyWithName:(id)a0 withValue:(id)a1;
+ (id)propertyWithName:(id)a0 withPropertyValues:(id)a1;
+ (id)propertyWithName:(id)a0 withValues:(id)a1 withType:(int)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)name;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)stringValue;
- (void).cxx_destruct;
- (id)values;
- (id)initWithName:(id)a0;
- (void)addValue:(id)a0;
- (BOOL)dirty;
- (id)changedValues;
- (void)removeValue:(id)a0;
- (void)setCommitStatus:(int)a0;
- (void)markAsClean;
- (BOOL)isEqualToProperty:(id)a0;
- (int)commitStatus;
- (BOOL)isEqualToProperty:(id)a0 ignoreParameters:(id)a1 useCommittedValues:(BOOL)a2;
- (BOOL)isEqualToProperty:(id)a0 ignoreParameters:(id)a1;
- (void)restoreAsClean;
- (id)singleValue;
- (id)initFromVCal:(id)a0 withParseState:(id)a1;
- (id)initEncodedTextProperty:(id)a0 withParseState:(id)a1 property:(const struct { int x0; long long x1; int x2; int x3; id *x4; } *)a2;
- (id)initISO8061Property:(id)a0 withParseState:(id)a1 property:(const struct { int x0; long long x1; int x2; int x3; id *x4; } *)a2;
- (id)initISO8061DateListProperty:(id)a0 withParseState:(id)a1 property:(const struct { int x0; long long x1; int x2; int x3; id *x4; } *)a2;
- (id)initIntProperty:(id)a0 withParseState:(id)a1 property:(const struct { int x0; long long x1; int x2; int x3; id *x4; } *)a2;
- (id)initURIProperty:(id)a0 withParseState:(id)a1 property:(const struct { int x0; long long x1; int x2; int x3; id *x4; } *)a2;
- (id)initClassificationProperty:(id)a0 withParseState:(id)a1 property:(const struct { int x0; long long x1; int x2; int x3; id *x4; } *)a2;
- (id)initStatusProperty:(id)a0 withParseState:(id)a1 property:(const struct { int x0; long long x1; int x2; int x3; id *x4; } *)a2;
- (id)initRecurrenceProperty:(id)a0 withParseState:(id)a1 property:(const struct { int x0; long long x1; int x2; int x3; id *x4; } *)a2;
- (id)initTranspProperty:(id)a0 withParseState:(id)a1 property:(const struct { int x0; long long x1; int x2; int x3; id *x4; } *)a2;
- (id)initKeywordListProperty:(id)a0 withParseState:(id)a1 property:(const struct { int x0; long long x1; int x2; int x3; id *x4; } *)a2;
- (id)initRFC822AddressProperty:(id)a0 withParseState:(id)a1 property:(const struct { int x0; long long x1; int x2; int x3; id *x4; } *)a2;
- (id)initWithName:(id)a0 withPropertyValue:(id)a1;
- (id)initWithName:(id)a0 withValue:(id)a1 withType:(int)a2;
- (id)initWithName:(id)a0 withValues:(id)a1 withType:(int)a2;
- (id)initWithName:(id)a0 withValue:(id)a1;
- (id)initVerbatimProperty:(id)a0 withParseState:(id)a1 property:(const struct { int x0; long long x1; int x2; int x3; id *x4; } *)a2;
- (id)initWithName:(id)a0 withPropertyValues:(id)a1;
- (id)committedValues;
- (void)setSingleValue:(id)a0;
- (id)deletedValues;
- (BOOL)isSingleValued;
- (BOOL)isEqualToProperty:(id)a0 useCommittedValues:(BOOL)a1;

@end

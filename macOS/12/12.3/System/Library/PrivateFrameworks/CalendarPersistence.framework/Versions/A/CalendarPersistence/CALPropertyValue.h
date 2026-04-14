@class NSDictionary, NSMutableDictionary;

@interface CALPropertyValue : NSObject <NSCoding> {
    NSMutableDictionary *_params;
    int _type;
    id _value;
    NSMutableDictionary *_changelist;
    int _oldtype;
    id _oldvalue;
    int _status;
    NSDictionary *_unrecognizedProperties;
}

+ (id)propertyValue;
+ (id)propertyValueWithValue:(id)a0 withType:(int)a1;
+ (id)propertyValueWithValue:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)stringValue;
- (void).cxx_destruct;
- (int)type;
- (id)value;
- (id)parameters;
- (void)setParameters:(id)a0;
- (BOOL)dirty;
- (id)initWithValue:(id)a0;
- (void)addParameters:(id)a0;
- (id)parameterValueForName:(id)a0;
- (void)setCommitStatus:(int)a0;
- (void)addParameter:(id)a0 withValue:(id)a1;
- (void)markAsClean;
- (int)commitStatus;
- (void)restoreAsClean;
- (BOOL)isEqualToPropertyValue:(id)a0;
- (void)removeParameter:(id)a0;
- (BOOL)hasParameter:(id)a0;
- (id)initWithValue:(id)a0 withType:(int)a1;
- (BOOL)isEqualToPropertyValue:(id)a0 ignoreParameters:(id)a1 useCommittedValues:(BOOL)a2;
- (BOOL)isEqualToPropertyValue:(id)a0 ignoreParameters:(id)a1;
- (id)committedParameterValueForName:(id)a0;
- (id)setValue:(id)a0 withType:(int)a1;
- (BOOL)parameterChanged:(id)a0;

@end

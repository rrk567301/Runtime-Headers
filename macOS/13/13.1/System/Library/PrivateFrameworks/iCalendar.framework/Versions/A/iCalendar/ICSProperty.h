@class NSMutableDictionary;

@interface ICSProperty : NSObject <NSSecureCoding, ICSWriting> {
    NSMutableDictionary *_parameters;
    unsigned long long _type;
    id _value;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)valueAndParameterClasses;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)stringValue;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)value;
- (id)allParameters;
- (id)parameters;
- (void)setParameters:(id)a0;
- (id)initWithValue:(id)a0 type:(unsigned long long)a1;
- (BOOL)isMultiValued;
- (id)ICSStringWithOptions:(unsigned long long)a0;
- (void)ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (id)propertiesToIncludeForChecksumVersion:(int)a0;
- (id)parametersToIncludeForChecksumVersion:(int)a0;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)a0;
- (id)propertiesToObscure;
- (id)parametersToObscure;
- (BOOL)shouldObscureValue;
- (id)propertiesToHide;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1 additionalParameters:(id)a2;
- (void)_appendDateTimeInDate:(id)a0 asUTCToResult:(id)a1;
- (id)parameterValueForName:(id)a0;
- (void)addParametersFromDictionary:(id)a0;
- (void)setParameterValue:(id)a0 forName:(id)a1;
- (void)removeParameterValueForName:(id)a0;
- (void)setValue:(id)a0 type:(unsigned long long)a1;
- (BOOL)alwaysHasParametersToSerialize;
- (void)addParameter:(id)a0 withRawValue:(id)a1 options:(unsigned long long)a2;
- (void)_setParsedValues:(id)a0 type:(unsigned long long)a1;
- (void)setValueAsProperty:(id)a0 withRawValue:(const char *)a1 options:(unsigned long long)a2;

@end

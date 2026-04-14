@class NSArray, NSString, NSData, MTLType;

@interface MTLFunctionReflectionInternal : MTLFunctionReflection {
    NSArray *_builtInArguments;
    NSArray *_arguments;
    NSArray *_bindings;
    NSData *_pluginReturnData;
    unsigned long long _primitiveKind;
    NSArray *_tags;
    MTLType *_returnType;
    NSString *_userAnnotation;
    NSArray *_attributes;
}

- (id)returnType;
- (id)tags;
- (id)bindings;
- (id)builtInArguments;
- (id)pluginReturnData;
- (id)arguments;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (id)userAnnotation;
- (id)description;
- (id)initWithDevice:(id)a0 reflectionData:(id)a1 functionType:(unsigned long long)a2 options:(unsigned long long)a3;
- (unsigned long long)primitiveKind;
- (id)attributes;
- (id)initWithDevice:(id)a0 libReflectionData:(id)a1 functionType:(unsigned long long)a2;
- (id)initWithArguments:(id *)a0 argumentCount:(unsigned int)a1 builtInArgumentCount:(unsigned int)a2 globalBindings:(id *)a3 globalBindingCount:(unsigned int)a4 pluginReturnData:(id)a5 primitiveKind:(unsigned long long)a6 tags:(id *)a7 tagCount:(unsigned int)a8 returnType:(id)a9 userAnnotation:(id)a10 attributes:(id)a11;

@end

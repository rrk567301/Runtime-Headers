@class NSString, TSCH3DShaderVariable;

@interface TSCH3DShaderLinkedVariable : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) TSCH3DShaderVariable *variable;
@property (nonatomic) struct TSCH3DShaderVariableScopeType { unsigned long long _value; } scope;

+ (id)linkedVariable;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)description;
- (BOOL)isAttribute;
- (id)inputVariableName;

@end

@class NSString, NSArray, NSObject;

@interface NSScriptArgumentDescription : NSObject {
    NSString *_key;
    unsigned int _appleEventCode;
    NSObject *_typeNameOrDescription;
    char _isOptional;
    char _isHidden;
    unsigned long long _requiresAccess;
    NSString *_presentableDescription;
    NSObject *_presentableNameOrNames;
    NSArray *_synonymDescriptions;
}

+ (id)argumentDescriptionFromName:(id)a0 implDeclaration:(id)a1 presoDeclaration:(id)a2 suiteName:(id)a3 commandName:(id)a4;

- (void)dealloc;
- (id)description;
- (char)isHidden;
- (id)key;
- (id)typeDescription;
- (id)_descriptionWithTabCount:(unsigned long long)a0;
- (char)actualValueIsWritable;
- (unsigned short)appendParameterDeclarationsToAETEData:(id)a0;
- (unsigned int)appleEventCode;
- (id)firstPresentableName;
- (id)initWithKey:(id)a0 appleEventCode:(unsigned int)a1 type:(id)a2 isOptional:(char)a3 isHidden:(char)a4 requiresAccess:(unsigned long long)a5 presentableDescription:(id)a6 name:(id)a7 synonymDescriptions:(id)a8;
- (id)initWithKey:(id)a0 appleEventCode:(unsigned int)a1 type:(id)a2 isOptional:(char)a3 presentableDescription:(id)a4 nameOrNames:(id)a5;
- (char)isOptional;
- (id)parameterDescriptorFromEvent:(id)a0;
- (id)presentableDescription;
- (id)presentableNames;
- (void)reconcileToSuiteRegistry:(id)a0 suiteName:(id)a1 commandName:(id)a2;
- (unsigned long long)requiresAccess;

@end

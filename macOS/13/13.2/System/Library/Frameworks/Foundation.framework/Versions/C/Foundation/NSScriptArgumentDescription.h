@class NSString, NSArray, NSObject;

@interface NSScriptArgumentDescription : NSObject {
    NSString *_key;
    unsigned int _appleEventCode;
    NSObject *_typeNameOrDescription;
    BOOL _isOptional;
    BOOL _isHidden;
    unsigned long long _requiresAccess;
    NSString *_presentableDescription;
    NSObject *_presentableNameOrNames;
    NSArray *_synonymDescriptions;
}

+ (id)argumentDescriptionFromName:(id)a0 implDeclaration:(id)a1 presoDeclaration:(id)a2 suiteName:(id)a3 commandName:(id)a4;

- (void)dealloc;
- (id)description;
- (BOOL)isHidden;
- (id)key;
- (unsigned short)appendParameterDeclarationsToAETEData:(id)a0;
- (id)initWithKey:(id)a0 appleEventCode:(unsigned int)a1 type:(id)a2 isOptional:(BOOL)a3 isHidden:(BOOL)a4 requiresAccess:(unsigned long long)a5 presentableDescription:(id)a6 name:(id)a7 synonymDescriptions:(id)a8;
- (id)initWithKey:(id)a0 appleEventCode:(unsigned int)a1 type:(id)a2 isOptional:(BOOL)a3 presentableDescription:(id)a4 nameOrNames:(id)a5;
- (void)reconcileToSuiteRegistry:(id)a0 suiteName:(id)a1 commandName:(id)a2;
- (unsigned int)appleEventCode;
- (id)typeDescription;
- (BOOL)isOptional;
- (unsigned long long)requiresAccess;
- (BOOL)actualValueIsWritable;
- (id)presentableDescription;
- (id)presentableNames;
- (id)firstPresentableName;
- (id)parameterDescriptorFromEvent:(id)a0;
- (id)_descriptionWithTabCount:(unsigned long long)a0;

@end

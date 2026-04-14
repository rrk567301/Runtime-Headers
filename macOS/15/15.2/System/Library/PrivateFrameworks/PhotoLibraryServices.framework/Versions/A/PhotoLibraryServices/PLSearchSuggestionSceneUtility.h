@interface PLSearchSuggestionSceneUtility : NSObject

+ (id)_templateKeyPrefixForSceneTemplateType:(unsigned long long)a0;
+ (id)generateSceneBasedTemplateWithSceneTemplateType:(unsigned long long)a0 sceneTemplateSubType:(unsigned long long)a1 calendar:(id)a2 todayDate:(id)a3 locale:(id)a4;
+ (id)sceneIdentifierForSceneTemplateType:(unsigned long long)a0;
+ (id)supportedSceneIdentifiers;

@end

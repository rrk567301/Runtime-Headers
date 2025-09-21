@interface SFApplicationExtensionsEvaluationUtilities : NSObject

+ (BOOL)appLinksSDKSupportingMessagesAppShare;
+ (BOOL)defaultMailApplicationSupportsSpecialAppleEvent;
+ (id)defaultMailApplicationURL;
+ (BOOL)extension:(id)a0 supportsSharingMode:(BOOL)a1 collaborationType:(id)a2;
+ (BOOL)isPluginAllowedByMCX:(id)a0;
+ (BOOL)isPredicateSafeToExecute:(id)a0 withObject:(id)a1 identifier:(id)a2;
+ (BOOL)messagesAppSupportsSpecialAppleEvent;
+ (id)modifyMatchingRules:(id)a0 onlyActionExtensions:(BOOL)a1 allowDisabledExtensions:(BOOL)a2;
+ (id)serviceDescriptionForExtension:(id)a0 collaborationIsPostShare:(id)a1;

@end

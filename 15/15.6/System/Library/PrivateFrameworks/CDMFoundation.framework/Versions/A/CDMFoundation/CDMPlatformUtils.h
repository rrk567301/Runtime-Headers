@interface CDMPlatformUtils : NSObject

+ (char)isInternalInstall;
+ (char)isAppleTV;
+ (char)isHomePod;
+ (id)normalizeLocaleIdentifier:(id)a0;
+ (id)normalizedAssistantLocaleIdentifier;
+ (id)prettyPrintError:(id)a0;
+ (id)prettyPrintJson:(id)a0;

@end

@interface SecXPCUtils : NSObject

+ (struct __CFString { } *)copySigningIdentifier:(id)a0;
+ (struct __CFString { } *)copyApplicationIdentifierFromConnection:(id)a0;
+ (struct __CFString { } *)copyApplicationIdentifierFromSelf;
+ (BOOL)clientCanEditPreferenceOwnership;
+ (struct __CFString { } *)copyApplicationIdentifier;

@end

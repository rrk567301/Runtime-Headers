@class NSString, NSDictionary, NSArray, NSObject;

@interface NSScriptClassDescriptionMoreIVars : NSObject {
    NSString *defaultSubcontainerAttributeKey;
    NSDictionary *inverseRelationshipKeysByKey;
    NSString *presentableDescription;
    NSObject *presentableNameOrNames;
    NSString *presentablePluralName;
    NSArray *synonymDescriptions;
    char isHidden;
    char isFromLegacyPropertyLists;
    char isSynonym;
    NSDictionary *cachedPropertyDescriptionsByKey;
    NSObject *primitiveTypeNameOrDescription;
}

@end

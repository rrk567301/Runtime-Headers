@class NSArray, NSString, NSSet, NSDictionary, NSObject;

@interface NSScriptCommandDescriptionMoreIVars : NSObject {
    NSArray *argumentDescriptions;
    NSString *presentableDescription;
    NSObject *presentableNameOrNames;
    NSString *presentableResultDescription;
    NSArray *synonymDescriptions;
    NSSet *accessGroups;
    char isHidden;
    char isFromLegacyPropertyLists;
    NSDictionary *cachedArgumentDescriptionsByName;
}

@end

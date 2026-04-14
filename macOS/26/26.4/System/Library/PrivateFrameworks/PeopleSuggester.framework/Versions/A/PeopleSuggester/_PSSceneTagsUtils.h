@interface _PSSceneTagsUtils : NSObject

+ (id)humanReadableLabelForIdentifier:(long long)a0;
+ (id)humanReadableSynonymsForIdentifier:(long long)a0;
+ (id)identifierToLabelLookup;
+ (id)identifierToSynonymsLookup;
+ (id)loadJSONResourceAsDict:(id)a0;
+ (id)loadSceneTags;
+ (id)loadTagsToClusterNamesDict;
+ (id)sceneClusterDict;
+ (id)sceneTagsToClusterNames:(id)a0;

@end

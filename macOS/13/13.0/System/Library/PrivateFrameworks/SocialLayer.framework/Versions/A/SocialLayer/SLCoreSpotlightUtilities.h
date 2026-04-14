@interface SLCoreSpotlightUtilities : NSObject

+ (id)requiredSpotlightAttributeKeysForLinks;
+ (id)requiredSpotlightAttributeKeysForFiles;
+ (id)fetchCSSearchableItemForUniqueIdentifier:(id)a0 forContentType:(unsigned char)a1 withRequiredAttributes:(id)a2 error:(id *)a3;
+ (id)CSSearchQueryContextForAutodonatingChats;
+ (id)CSQueryStringForAutodonatingChatsWithDecay:(BOOL)a0;
+ (id)CSSearchQueryContextForSLHighlightsForContentType:(unsigned char)a0;
+ (id)CSQueryStringForSLHighlightsForContentType:(unsigned char)a0 forChatIdentifiers:(id)a1;

@end

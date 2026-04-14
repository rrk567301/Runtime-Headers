@interface ISS_MMUtilities : NSObject

+ (void)initialize;
+ (id)_sourceId;
+ (id)_fetchConfigsWithURL:(id)a0;
+ (id)_getConfigDictionaryAtURL:(id)a0;
+ (unsigned int)_threadMax;
+ (BOOL)_doErrorLogging;
+ (BOOL)_doDebugLogging;
+ (BOOL)_useSecurePrincipalManagement;
+ (id)_createGuid;
+ (id)_xmlNodeFromProperties:(id)a0;
+ (id)formattedDataFromProperties:(id)a0;
+ (id)principalPropertiesFromPrincipalID:(id)a0;
+ (id)_deserializeDictionaryData:(id)a0;
+ (id)_dispatchRequest:(id)a0 synchronously:(BOOL)a1 withDelegate:(id)a2 postHandler:(SEL)a3 targetObject:(id)a4 andNotes:(id)a5 requiringResult:(BOOL)a6;
+ (id)_deriveErrorFromInfo:(id)a0 forMasterRequest:(id)a1;
+ (id)_deriveErrorFromTransaction:(id)a0 forMasterRequest:(id)a1;
+ (id)_escapeXMLString:(id)a0;
+ (id)_unescapeXMLString:(id)a0;
+ (id)_normalizeXMLString:(id)a0;
+ (id)_removeWSForbiddenElements:(id)a0;
+ (id)_decodeCharacterEntitiesInString:(id)a0;
+ (BOOL)_createdDirectoryAtPath:(id)a0;
+ (id)_gzipData:(id)a0;
+ (id)_gunzipData:(id)a0;
+ (int)_osVersionNum;
+ (BOOL)_osIsTigerOrGreater;
+ (BOOL)_osIsLeopardOrGreater;
+ (int)verifyResources;

@end

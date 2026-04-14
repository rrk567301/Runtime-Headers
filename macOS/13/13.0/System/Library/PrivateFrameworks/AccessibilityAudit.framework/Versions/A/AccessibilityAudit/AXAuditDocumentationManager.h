@interface AXAuditDocumentationManager : NSObject

+ (id)sharedManager;
+ (id)webpageURLs;
+ (id)appleDocViewerURLs;
+ (id)appleDocURLForType:(long long)a0;
+ (id)_appleDocViewerURLForWebDocURL:(id)a0;
+ (id)webDocURLForType:(long long)a0;
+ (id)_getOriginaliOSTitle:(id)a0;
+ (long long)getAXDocumentationType:(id)a0 isCatalyst:(BOOL)a1;
+ (id)_macOSToiOSTitleDictionary;
+ (id)_docTypeCatalystDictionary;
+ (id)_docTypeDictionary;

@end

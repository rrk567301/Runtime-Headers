@interface WebCoreStatistics : NSObject

+ (id)statistics;
+ (void)emptyCache;
+ (int)cachedPageCount;
+ (void)garbageCollectJavaScriptObjects;
+ (unsigned long long)iconRecordCount;
+ (unsigned long long)javaScriptProtectedObjectsCount;
+ (int)autoreleasedPageCount;
+ (unsigned long long)cachedFontDataCount;
+ (unsigned long long)cachedFontDataInactiveCount;
+ (int)cachedFrameCount;
+ (void)garbageCollectJavaScriptObjectsOnAlternateThreadForDebugging:(char)a0;
+ (unsigned long long)glyphPageCount;
+ (unsigned long long)iconPageURLMappingCount;
+ (unsigned long long)iconRetainedPageURLCount;
+ (unsigned long long)iconsWithDataCount;
+ (unsigned long long)javaScriptGlobalObjectsCount;
+ (unsigned long long)javaScriptInterpretersCount;
+ (unsigned long long)javaScriptNoGCAllowedObjectsCount;
+ (id)javaScriptObjectTypeCounts;
+ (unsigned long long)javaScriptObjectsCount;
+ (unsigned long long)javaScriptProtectedGlobalObjectsCount;
+ (id)javaScriptProtectedObjectTypeCounts;
+ (unsigned long long)javaScriptReferencedObjectsCount;
+ (id)javaScriptRootObjectClasses;
+ (id)javaScriptRootObjectTypeCounts;
+ (id)memoryStatistics;
+ (void)purgeInactiveFontData;
+ (void)returnFreeMemoryToSystem;
+ (void)setCacheDisabled:(char)a0;
+ (void)setJavaScriptGarbageCollectorTimerEnabled:(char)a0;
+ (void)setShouldPrintExceptions:(char)a0;
+ (char)shouldPrintExceptions;
+ (void)startIgnoringWebCoreNodeLeaks;
+ (void)stopIgnoringWebCoreNodeLeaks;

@end

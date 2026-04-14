@class NSString, NSMutableDictionary;

@interface CalDAVETagCache : NSObject {
    NSMutableDictionary *_filenameToScheduleTagMap;
    NSMutableDictionary *_filenameToETagMap;
    NSMutableDictionary *_filenameToModifiedLocallyMap;
    NSMutableDictionary *_uidToFilenameMap;
    NSString *_cacheFilename;
    NSString *_cTag;
    BOOL _inited;
    BOOL _isDirty;
}

+ (id)newCacheControllerAtDirectory:(id)a0;
+ (id)localPrincipalPathForUID:(id)a0;
+ (id)newCacheControllerForPrincipalUID:(id)a0 calendarUID:(id)a1;
+ (id)newCacheControllerForPrincipalInboxWithUID:(id)a0;
+ (id)newCacheControllerForPrincipalNotificationCollectionWithUID:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)cTag;
- (id)_initWithDirectory:(id)a0;
- (id)etagForFilename:(id)a0;
- (id)scheduleTagForFilename:(id)a0;
- (id)filenameForUID:(id)a0;
- (id)allFilenames;
- (void)deleteFile;
- (id)cacheFilename;

@end

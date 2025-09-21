@class NSString;

@interface FMDSharedConfiguration : NSObject

@property (class, readonly, nonatomic) FMDSharedConfiguration *sharedInstance;

@property (readonly, nonatomic) NSString *localeString;

+ (id)localizedStringWithKey:(id)a0;

- (id)_createAwarenessStringsDictionaryWithData:(id)a0 key:(id)a1 deviceClasses:(id)a2;
- (id)_createFollowUpStringsDictionaryWithData:(id)a0 key:(id)a1 deviceClasses:(id)a2;
- (id)contentsWithLocale:(id)a0;
- (id)defaultEntryForConfiguration:(id)a0 deviceClasses:(id)a1;
- (void)downloadWithLocale:(id)a0 reply:(id /* block */)a1;
- (void)downloadWithReply:(id /* block */)a0;
- (id)entryForConfiguration:(id)a0 deviceClasses:(id)a1;
- (id)entryForConfiguration:(id)a0 deviceClasses:(id)a1 locale:(id)a2;
- (id)expiryDateWithContents:(id)a0;
- (id)fileURLWithLocale:(id)a0;
- (void)forceDownloadWithLocale:(id)a0 reply:(id /* block */)a1;
- (void)forceDownloadWithReply:(id /* block */)a0;
- (void)getTheftAndLossCoverageWithSerialNumber:(id)a0 reply:(id /* block */)a1;
- (id)sharedConfigurationDictionaryFromData:(id)a0 key:(id)a1 deviceClasses:(id)a2;

@end

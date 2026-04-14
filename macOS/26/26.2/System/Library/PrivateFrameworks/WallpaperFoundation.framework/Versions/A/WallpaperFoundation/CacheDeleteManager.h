@class NSString, NSURL;
@protocol CacheDeleteManagerDelegate;

@interface CacheDeleteManager : NSObject {
    NSURL *_monitoringDirectory;
    struct __CFString { } *_purgeNotificationID;
}

@property (readonly, copy, nonatomic) NSString *purgeIdentifier;
@property (weak, nonatomic) id<CacheDeleteManagerDelegate> delegate;

- (void).cxx_destruct;
- (void)_processEvents:(id)a0;
- (void)monitorDirectoryForPurgedFiles:(id)a0;
- (BOOL)URL:(id)a0 isPurgeable:(BOOL *)a1 error:(id *)a2;
- (void)_handleRemovedFiles;
- (id)initWithPurgeIdentifier:(id)a0;
- (BOOL)markURL:(id)a0 asPurgeable:(BOOL)a1 urgency:(long long)a2 error:(id *)a3;

@end

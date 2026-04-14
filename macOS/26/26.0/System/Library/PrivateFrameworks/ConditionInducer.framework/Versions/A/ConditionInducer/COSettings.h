@class NSURL, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface COSettings : NSObject

@property (retain, nonatomic) NSMutableDictionary *settings;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *source;
@property (copy, nonatomic) id /* block */ clientCallback;
@property (retain, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSURL *path;

- (id)objectForKey:(id)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (id)initWithURL:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)stopMonitoring;
- (void).cxx_destruct;
- (BOOL)readSettings;
- (BOOL)writeSettings;
- (BOOL)createSettingsFile;
- (void)startMonitoringForChanges:(id /* block */)a0;
- (BOOL)startMonitoringForFileDeletion;
- (void)stopMonitoringForFileDeletion;

@end

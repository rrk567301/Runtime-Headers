@class NSURL, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface COSettings : NSObject

@property (retain, nonatomic) NSMutableDictionary *settings;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *source;
@property (copy, nonatomic) id /* block */ clientCallback;
@property (retain, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSURL *path;

- (id)dictionaryRepresentation;
- (void)stopMonitoring;
- (id)objectForKey:(id)a0;
- (id)initWithURL:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;
- (BOOL)readSettings;
- (BOOL)writeSettings;
- (BOOL)createSettingsFile;
- (void)startMonitoringForChanges:(id /* block */)a0;
- (BOOL)startMonitoringForFileDeletion;
- (void)stopMonitoringForFileDeletion;

@end

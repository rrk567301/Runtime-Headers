@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _INVocabularyConnection : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _connectionValid;
}

+ (void)initialize;

- (void)_clearConnection;
- (void)dealloc;
- (id)init;
- (id)_connect;
- (id)settingsService;
- (void).cxx_destruct;
- (id)_syncService;

@end

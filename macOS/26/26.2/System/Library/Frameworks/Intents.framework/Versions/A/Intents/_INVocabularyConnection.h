@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _INVocabularyConnection : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _connectionValid;
}

+ (void)initialize;

- (void)_clearConnection;
- (id)_connect;
- (void).cxx_destruct;
- (id)settingsService;
- (id)init;
- (void)dealloc;
- (id)_syncService;

@end

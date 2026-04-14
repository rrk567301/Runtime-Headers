@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _INVocabularyConnection : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _connectionValid;
}

+ (void)initialize;

- (id)_connect;
- (void)_clearConnection;
- (id)settingsService;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (id)_syncService;

@end

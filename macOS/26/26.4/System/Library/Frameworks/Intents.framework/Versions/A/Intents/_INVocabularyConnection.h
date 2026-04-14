@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _INVocabularyConnection : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _connectionValid;
}

+ (void)initialize;

- (id)settingsService;
- (void)_clearConnection;
- (void).cxx_destruct;
- (id)init;
- (id)_connect;
- (void)dealloc;
- (id)_syncService;

@end

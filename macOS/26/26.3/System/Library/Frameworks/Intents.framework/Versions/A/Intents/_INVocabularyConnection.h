@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _INVocabularyConnection : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _connectionValid;
}

+ (void)initialize;

- (id)_connect;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_clearConnection;
- (id)settingsService;
- (id)_syncService;

@end

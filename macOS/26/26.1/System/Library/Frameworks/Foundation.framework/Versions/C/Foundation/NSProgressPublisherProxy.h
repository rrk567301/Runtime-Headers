@class NSProgressValues, NSString, NSXPCConnection, NSFileAccessNode;
@protocol NSProgressPublisher;

@interface NSProgressPublisherProxy : NSObject <NSProgressPublisher> {
    id<NSProgressPublisher> _forwarder;
    id _publisherID;
    NSFileAccessNode *_itemLocation;
    NSXPCConnection *_connection;
}

@property (copy) NSString *category;
@property NSFileAccessNode *itemLocation;
@property (readonly, copy) NSProgressValues *values;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publisherID;
- (void)observeUserInfoValue:(id)a0 forKey:(id)a1;
- (oneway void)cancel;
- (oneway void)resume;
- (oneway void)pause;
- (oneway void)appWithBundleID:(id)a0 didAcknowledgeWithSuccess:(BOOL)a1;
- (oneway void)prioritize;
- (id)initWithForwarder:(id)a0 onConnection:(id)a1 publisherID:(id)a2 values:(id)a3;
- (void)dealloc;
- (id)descriptionWithIndenting:(id)a0;
- (BOOL)isFromConnection:(id)a0;
- (void)observeValues:(id)a0 forKeys:(id)a1;

@end

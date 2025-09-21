@class PBCodable, GEOCoalescingTimer, NSString, NSURL, NSError, geo_isolater, NSData;

@interface GEOPurgableFile : NSObject {
    GEOCoalescingTimer *_purgeTimer;
    geo_isolater *_isolater;
    int _notifyToken;
    NSURL *_url;
    Class _pbType;
    NSError *_lastError;
    NSData *_data;
    NSString *_string;
    PBCodable *_proto;
}

@property (readonly, nonatomic) NSError *lastError;

- (void)_purge;
- (id)_readData;
- (id)contents;
- (void).cxx_destruct;
- (id)contentsAsProtocolBuffer;
- (id)contentsAsUTF8;
- (void)forcePurge;
- (id)initInternalWithURL:(id)a0 changedNotification:(const char *)a1 purgeDelay:(double)a2 protocolBufferType:(Class)a3;
- (id)initWithURL:(id)a0 changedNotification:(const char *)a1 purgeDelay:(double)a2;
- (id)initWithURL:(id)a0 changedNotification:(const char *)a1 purgeDelay:(double)a2 protocolBufferType:(Class)a3;

@end

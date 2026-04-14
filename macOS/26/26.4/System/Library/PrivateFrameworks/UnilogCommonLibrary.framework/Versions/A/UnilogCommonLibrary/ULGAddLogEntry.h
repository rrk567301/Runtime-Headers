@class NSUUID, NSData;

@interface ULGAddLogEntry : NSObject <ULGSchemaType> {
    void /* unknown type, empty encoding */ sessionIdStorage;
    void /* function */ logPayload;
}

@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long observedTimestamp;
@property (nonatomic, copy) NSUUID *sessionId;
@property (nonatomic, copy) NSData *logPayload;

- (id)serialize;
- (void).cxx_destruct;

@end

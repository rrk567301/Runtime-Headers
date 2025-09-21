@class NSUUID, NSString;

@interface ATXDigestOnboardingSuggestionLoggingEvent : NSObject <BMStoreData, ATXProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSUUID *sessionUUID;
@property (readonly, nonatomic) int outcome;
@property (readonly, nonatomic) double timeToResolution;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (id)proto;
- (void).cxx_destruct;
- (id)initWithSessionUUID:(id)a0 outcome:(int)a1 timeToResolution:(double)a2;

@end

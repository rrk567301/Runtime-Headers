@class NSDateInterval, NSString, NSDate;

@interface BMTextInputSessionEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long sessionType;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (id)initWithDateInterval:(id)a0 bundleID:(id)a1 sessionID:(id)a2 sessionType:(unsigned long long)a3;
- (id)initWithDateInterval:(id)a0 bundleID:(id)a1 sessionType:(unsigned long long)a2;
- (id)proto;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

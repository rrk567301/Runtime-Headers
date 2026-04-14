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

- (id)initWithDateInterval:(id)a0 bundleID:(id)a1 sessionType:(unsigned long long)a2;
- (id)encodeAsProto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)serialize;
- (id)initWithDateInterval:(id)a0 bundleID:(id)a1 sessionID:(id)a2 sessionType:(unsigned long long)a3;

@end

@class NSString, NSDateInterval;

@interface BMHomeKitClientBase : NSObject <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) double duration;
@property (readonly, copy, nonatomic) NSString *homeUniqueIdentifier;
@property (readonly, nonatomic) int homeOccupancy;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly, copy, nonatomic) NSString *clientName;
@property (readonly, copy, nonatomic) NSString *eventCorrelationIdentifier;
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
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDateInterval:(id)a0 homeUniqueIdentifier:(id)a1 homeOccupancy:(int)a2 source:(id)a3 clientName:(id)a4 eventCorrelationIdentifier:(id)a5;

@end

@class NSString, NSUUID, NSArray;

@interface BMMicroLocationRestrictedLocalizationEvent : NSObject <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, copy, nonatomic) NSString *clientBundleIdentifier;
@property (readonly, copy, nonatomic) NSUUID *maxProbabilityLabelIdentifier;
@property (readonly, nonatomic) double maxProbability;
@property (readonly, nonatomic) NSArray *probabilityVector;
@property (readonly, nonatomic) NSArray *numDevicesVector;
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
- (id)initWithAbsoluteTimeStamp:(double)a0 clientBundleIdentifier:(id)a1 maxProbabilityLabelIdentifier:(id)a2 maxProbability:(double)a3 probabilityVector:(id)a4 numDevicesVector:(id)a5;

@end

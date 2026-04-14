@class NSUUID, NSString;

@interface BMMicroLocationProbabilityPerLabel : NSObject <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, copy, nonatomic) NSUUID *labelIdentifier;
@property (readonly, nonatomic) double probability;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)proto;
- (id)serialize;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithLabelIdentifier:(id)a0 probability:(double)a1;

@end

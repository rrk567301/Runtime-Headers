@class NSString, NSUUID;

@interface BMMicroLocationTruthTagEvent : NSObject <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, copy, nonatomic) NSString *clientBundleIdentifier;
@property (readonly, copy, nonatomic) NSUUID *truthTagIdentifier;
@property (readonly, copy, nonatomic) NSUUID *recordingRequestIdentifier;
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
- (id)initWithAbsoluteTimestamp:(double)a0 clientBundleIdentifier:(id)a1 truthTagIdentifier:(id)a2 recordingRequestIdentifier:(id)a3;

@end

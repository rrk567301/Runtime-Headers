@class NSString;

@interface BMSiriDictationEvent : NSObject <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, copy, nonatomic) NSString *recognizedText;
@property (readonly, copy, nonatomic) NSString *correctedText;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)json;
- (id)proto;
- (id)serialize;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)jsonDict;
- (id)encodeAsProto;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAbsoluteTimestamp:(double)a0;
- (id)initWithAbsoluteTimestamp:(double)a0 recognizedText:(id)a1 correctedText:(id)a2;

@end

@interface ATXPredictionContextDomain : NSObject <ATXProtoBufWrapper>

- (id)jsonDict;
- (id)encodeAsProto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;

@end

@interface ATXPredictionContextDomain : NSObject <ATXProtoBufWrapper>

- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)jsonDict;
- (id)proto;

@end

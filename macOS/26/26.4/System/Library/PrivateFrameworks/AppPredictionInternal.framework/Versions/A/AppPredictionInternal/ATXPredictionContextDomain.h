@interface ATXPredictionContextDomain : NSObject <ATXProtoBufWrapper>

- (id)jsonDict;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (id)initWithProto:(id)a0;

@end

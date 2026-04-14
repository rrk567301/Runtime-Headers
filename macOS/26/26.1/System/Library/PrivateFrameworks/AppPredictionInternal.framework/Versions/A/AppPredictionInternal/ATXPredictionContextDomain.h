@interface ATXPredictionContextDomain : NSObject <ATXProtoBufWrapper>

- (id)encodeAsProto;
- (id)initWithProtoData:(id)a0;
- (id)jsonDict;
- (id)initWithProto:(id)a0;
- (id)proto;

@end

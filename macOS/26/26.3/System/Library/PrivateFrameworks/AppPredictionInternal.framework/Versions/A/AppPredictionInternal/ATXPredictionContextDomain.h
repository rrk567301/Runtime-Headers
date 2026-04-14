@interface ATXPredictionContextDomain : NSObject <ATXProtoBufWrapper>

- (id)proto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)jsonDict;
- (id)encodeAsProto;

@end

@interface ATXPredictionAmbientLightContext : ATXPredictionContextDomain

@property (readonly, nonatomic) int ambientLightType;

- (id)encodeAsProto;
- (id)initWithProtoData:(id)a0;
- (id)jsonDict;
- (id)initWithAmbientLightType:(int)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToATXPredictionAmbientLightContext:(id)a0;

@end

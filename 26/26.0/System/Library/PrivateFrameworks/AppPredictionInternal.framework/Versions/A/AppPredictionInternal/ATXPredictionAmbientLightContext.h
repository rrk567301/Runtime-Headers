@interface ATXPredictionAmbientLightContext : ATXPredictionContextDomain

@property (readonly, nonatomic) int ambientLightType;

- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)initWithAmbientLightType:(int)a0;
- (id)jsonDict;
- (BOOL)isEqualToATXPredictionAmbientLightContext:(id)a0;
- (id)description;
- (id)proto;
- (BOOL)isEqual:(id)a0;

@end

@interface ATXPredictionAmbientLightContext : ATXPredictionContextDomain

@property (readonly, nonatomic) int ambientLightType;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)jsonDict;
- (id)encodeAsProto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)initWithAmbientLightType:(int)a0;
- (BOOL)isEqualToATXPredictionAmbientLightContext:(id)a0;

@end

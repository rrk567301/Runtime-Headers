@interface ATXPredictionAmbientLightContext : ATXPredictionContextDomain

@property (readonly, nonatomic) int ambientLightType;

- (BOOL)isEqual:(id)a0;
- (id)jsonDict;
- (id)initWithProtoData:(id)a0;
- (id)proto;
- (id)initWithProto:(id)a0;
- (id)description;
- (id)initWithAmbientLightType:(int)a0;
- (BOOL)isEqualToATXPredictionAmbientLightContext:(id)a0;
- (id)encodeAsProto;

@end

@interface ATXPredictionAmbientLightContext : ATXPredictionContextDomain

@property (readonly, nonatomic) int ambientLightType;

- (BOOL)isEqualToATXPredictionAmbientLightContext:(id)a0;
- (id)description;
- (id)proto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)jsonDict;
- (id)encodeAsProto;
- (BOOL)isEqual:(id)a0;
- (id)initWithAmbientLightType:(int)a0;

@end

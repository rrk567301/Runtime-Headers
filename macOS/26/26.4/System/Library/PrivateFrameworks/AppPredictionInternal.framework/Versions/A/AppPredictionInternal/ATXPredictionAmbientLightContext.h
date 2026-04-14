@interface ATXPredictionAmbientLightContext : ATXPredictionContextDomain

@property (readonly, nonatomic) int ambientLightType;

- (id)jsonDict;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (BOOL)isEqualToATXPredictionAmbientLightContext:(id)a0;
- (id)encodeAsProto;
- (BOOL)isEqual:(id)a0;
- (id)initWithAmbientLightType:(int)a0;
- (id)initWithProto:(id)a0;
- (id)description;

@end

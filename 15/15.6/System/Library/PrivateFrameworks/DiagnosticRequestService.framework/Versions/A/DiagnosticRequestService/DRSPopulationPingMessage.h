@interface DRSPopulationPingMessage : DRSTaskingSystemMessage

+ (id)messageType;

- (id)init;
- (char)_versionIsSupported:(id)a0;
- (id)initWithJSONDict:(id)a0;

@end

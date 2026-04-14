@interface MNIPCGuidanceStateRequest : MNIPCMessage

@property (nonatomic) BOOL includeRoute;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryValue;

@end

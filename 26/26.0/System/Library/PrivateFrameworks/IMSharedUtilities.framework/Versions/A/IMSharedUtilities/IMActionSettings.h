@interface IMActionSettings : NSObject <IMChipActionProtocol, IMAttributableContent>

@property (nonatomic, readonly) long long type;

- (id)initWithDictionary:(id)a0;
- (id)initWithType:(long long)a0;
- (id)dictionaryRepresentation;
- (id)init;

@end

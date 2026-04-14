@interface IMActionSettings : NSObject <IMChipActionProtocol, IMAttributableContent>

@property (nonatomic, readonly) long long type;

- (id)initWithType:(long long)a0;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)dictionaryRepresentation;

@end

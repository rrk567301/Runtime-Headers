@interface IMActionDevice : NSObject <IMChipActionProtocol, IMAttributableContent>

@property (nonatomic, readonly) long long type;

- (id)dictionaryRepresentation;
- (id)initWithType:(long long)a0;
- (id)initWithDictionary:(id)a0;
- (id)init;

@end

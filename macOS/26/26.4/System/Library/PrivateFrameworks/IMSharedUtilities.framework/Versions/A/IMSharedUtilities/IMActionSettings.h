@interface IMActionSettings : NSObject <IMChipActionProtocol, IMAttributableContent>

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long hash;

- (id)initWithType:(long long)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)init;

@end

@interface IMActionRequestLocation : NSObject <IMChipActionProtocol, IMAttributableContent>

@property (nonatomic, readonly) BOOL sendPush;
@property (nonatomic, readonly) long long hash;

- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithSendPush:(BOOL)a0;

@end

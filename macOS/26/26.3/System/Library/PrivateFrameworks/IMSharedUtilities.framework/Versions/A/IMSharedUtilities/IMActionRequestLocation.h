@interface IMActionRequestLocation : NSObject <IMChipActionProtocol, IMAttributableContent>

@property (nonatomic, readonly) BOOL sendPush;
@property (nonatomic, readonly) long long hash;

- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSendPush:(BOOL)a0;

@end

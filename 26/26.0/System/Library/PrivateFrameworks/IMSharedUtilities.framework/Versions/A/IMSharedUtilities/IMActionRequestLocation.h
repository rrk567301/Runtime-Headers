@interface IMActionRequestLocation : NSObject <IMChipActionProtocol, IMAttributableContent>

@property (nonatomic, readonly) BOOL sendPush;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithSendPush:(BOOL)a0;

@end

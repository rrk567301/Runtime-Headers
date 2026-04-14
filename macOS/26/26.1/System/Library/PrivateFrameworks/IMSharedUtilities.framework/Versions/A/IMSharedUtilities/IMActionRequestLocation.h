@interface IMActionRequestLocation : NSObject <IMChipActionProtocol, IMAttributableContent>

@property (nonatomic, readonly) BOOL sendPush;

- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)initWithSendPush:(BOOL)a0;

@end

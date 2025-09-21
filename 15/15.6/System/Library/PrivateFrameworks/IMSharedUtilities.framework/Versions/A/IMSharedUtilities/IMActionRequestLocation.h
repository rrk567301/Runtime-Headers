@interface IMActionRequestLocation : NSObject <IMChipActionProtocol, IMAttributableContent>

@property (nonatomic, readonly) void /* unknown type, empty encoding */ sendPush;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithSendPush:(char)a0;

@end

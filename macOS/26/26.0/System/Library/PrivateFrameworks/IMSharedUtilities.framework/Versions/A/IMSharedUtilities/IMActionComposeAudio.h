@class NSString;

@interface IMActionComposeAudio : NSObject <IMChipActionProtocol, IMAttributableContent> {
    void /* function */ phoneNumber;
}

@property (nonatomic, readonly) NSString *phoneNumber;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPhoneNumber:(id)a0;

@end

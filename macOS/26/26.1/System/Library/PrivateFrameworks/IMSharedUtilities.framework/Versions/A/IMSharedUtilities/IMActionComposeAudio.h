@class NSString;

@interface IMActionComposeAudio : NSObject <IMChipActionProtocol, IMAttributableContent> {
    void /* function */ phoneNumber;
}

@property (nonatomic, readonly) NSString *phoneNumber;

- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithPhoneNumber:(id)a0;

@end

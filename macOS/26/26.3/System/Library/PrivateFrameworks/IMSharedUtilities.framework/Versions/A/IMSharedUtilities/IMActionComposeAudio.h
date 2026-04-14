@class NSString;

@interface IMActionComposeAudio : NSObject <IMChipActionProtocol, IMAttributableContent> {
    void /* function */ phoneNumber;
}

@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) long long hash;

- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithPhoneNumber:(id)a0;

@end

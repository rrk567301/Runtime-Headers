@class NSString;

@interface IMActionComposeVideo : NSObject <IMChipActionProtocol, IMAttributableContent> {
    void /* function */ phoneNumber;
}

@property (nonatomic, readonly) NSString *phoneNumber;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)dictionaryRepresentation;
- (id)initWithPhoneNumber:(id)a0;

@end

@class NSString;

@interface IMActionDialVideo : NSObject <IMChipActionProtocol, IMAttributableContent> {
    void /* function */ phoneNumber;
    void /* function */ fallbackUrl;
}

@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) NSString *fallbackUrl;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPhoneNumber:(id)a0 fallbackUrl:(id)a1;

@end

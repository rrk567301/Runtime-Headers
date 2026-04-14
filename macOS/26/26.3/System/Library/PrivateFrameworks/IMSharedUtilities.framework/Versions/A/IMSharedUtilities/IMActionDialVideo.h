@class NSString;

@interface IMActionDialVideo : NSObject <IMChipActionProtocol, IMAttributableContent> {
    void /* function */ phoneNumber;
    void /* function */ fallbackUrl;
}

@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) NSString *fallbackUrl;
@property (nonatomic, readonly) long long hash;

- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithPhoneNumber:(id)a0 fallbackUrl:(id)a1;

@end

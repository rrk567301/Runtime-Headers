@class NSString;

@interface IMActionComposeText : NSObject <IMChipActionProtocol, IMAttributableContent> {
    void /* function */ phoneNumber;
    void /* function */ text;
}

@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) long long hash;

- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)init;
- (id)initWithPhoneNumber:(id)a0 text:(id)a1;

@end

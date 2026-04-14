@class NSString;

@interface MNIPCShieldInfoMessage : MNIPCMessage

@property (nonatomic) int shieldID;
@property (copy, nonatomic) NSString *shieldStringID;
@property (copy, nonatomic) NSString *shieldText;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryValue;

@end

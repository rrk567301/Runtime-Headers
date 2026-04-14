@class NSString;

@interface NetMIDI2AuthorizationData : NSObject

@property (nonatomic) int authenticationMethod;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *sharedSecret;

+ (id)fromDictionary:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)toDictionary;
- (id)initWithUsername:(id)a0 password:(id)a1;
- (id)initWithMethod:(int)a0 username:(id)a1 password:(id)a2 sharedSecret:(id)a3;
- (id)initWithSharedSecret:(id)a0;

@end

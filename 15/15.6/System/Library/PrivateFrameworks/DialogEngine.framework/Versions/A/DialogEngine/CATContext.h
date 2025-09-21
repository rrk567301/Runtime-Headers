@class NSString, NSDictionary;

@interface CATContext : NSObject

@property (retain, nonatomic) NSString *siriLocale;
@property (retain, nonatomic) NSString *siriVoiceGender;
@property char isMultiUserEnabled;
@property char requiresUserGrounding;
@property unsigned int randomSeed;
@property long long currentTime;
@property (retain, nonatomic) NSDictionary *userSettings;

- (id)init;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithInputLocale:(id)a0 outputVoiceLocale:(id)a1;

@end

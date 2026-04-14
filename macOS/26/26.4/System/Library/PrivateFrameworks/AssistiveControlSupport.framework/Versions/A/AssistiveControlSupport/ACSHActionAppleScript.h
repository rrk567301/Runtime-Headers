@class NSString, ACSHResourceCollection;

@interface ACSHActionAppleScript : ACSHAction

@property (retain, nonatomic) NSString *scriptUUID;
@property (retain, nonatomic) ACSHResourceCollection *resourceCollection;

+ (id)actionWithAppleScriptUUID:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end

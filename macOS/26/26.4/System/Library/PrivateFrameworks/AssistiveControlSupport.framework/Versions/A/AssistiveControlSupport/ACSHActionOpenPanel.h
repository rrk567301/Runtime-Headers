@class NSString, NSDictionary;

@interface ACSHActionOpenPanel : ACSHAction

@property (copy, nonatomic) NSString *panelUUID;
@property (retain, nonatomic) NSDictionary *panelInfo;

+ (id)actionWithPanelUUID:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDescription;
- (id)paramDictionaryForSaving;

@end

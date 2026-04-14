@class NSString, NSDictionary, IFInstallPlan, NSArray;

@interface SUPkgMetadata : NSObject {
    NSDictionary *_infoDictionary;
    NSString *_identifier;
    NSString *_version;
    NSString *_buildVersion;
    int _restartAction;
    IFInstallPlan *_actionPlan;
    NSArray *_searches;
}

+ (int)restartActionWithString:(id)a0;

- (void)dealloc;
- (id)initWithData:(id)a0;
- (id)identifier;
- (id)infoDictionary;
- (id)version;
- (id)buildVersion;
- (int)restartAction;
- (void)_loadInfoPlistData:(id)a0;
- (id)_elementWithName:(id)a0 fromNode:(id)a1;
- (BOOL)_loadFromNSXMLElement:(id)a0;
- (id)_actionPlan;
- (id)_actionPlanForTarget:(id)a0;
- (BOOL)performRequirementChecksOnVolume:(id)a0;

@end

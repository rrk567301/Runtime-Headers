@class NSString, NSMutableDictionary, NSBundle, SCRCUserDefaults, NSMutableArray;

@interface SCROBrailleDisplayInputManagerCacheObject : NSObject {
    NSString *_driverIdentifier;
    NSString *_modelIdentifier;
    int _brailleInputMode;
    NSMutableDictionary *_commandDictionary;
    NSMutableArray *_orderedIdentifiers;
    NSBundle *_bundle;
    SCRCUserDefaults *_userDefaults;
}

- (void).cxx_destruct;
- (id)bundle;
- (id)modelIdentifier;
- (id)userDefaults;
- (id)orderedIdentifiers;
- (id)driverIdentifier;
- (id)commandDictionary;
- (int)brailleInputMode;
- (id)initWithDriverIdentifier:(id)a0 modelIdentifier:(id)a1 brailleInputMode:(int)a2 commandDictionary:(id)a3 orderedIdentifiers:(id)a4 bundle:(id)a5 userDefaults:(id)a6;

@end

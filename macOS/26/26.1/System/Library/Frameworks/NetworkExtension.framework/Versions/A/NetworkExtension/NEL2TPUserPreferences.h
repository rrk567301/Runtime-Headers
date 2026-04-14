@class NSString, NEVPNProtocolL2TP;

@interface NEL2TPUserPreferences : NSObject <NEConfigurationValidating> {
    struct __SCUserPreferencesRef { } *_userPrefs;
}

@property (readonly) NSString *identifier;
@property (retain) NSString *name;
@property (copy) NEVPNProtocolL2TP *settings;
@property (getter=isCurrent) BOOL current;
@property (readonly, getter=isForced) BOOL forced;

- (id)initWithConfiguration:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)checkValidityAndCollectErrors:(id)a0;

@end

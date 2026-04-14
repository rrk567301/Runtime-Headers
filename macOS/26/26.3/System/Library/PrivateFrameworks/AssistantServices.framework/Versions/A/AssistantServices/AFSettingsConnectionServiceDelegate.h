@class NSString, AFSettingsConnection;

@interface AFSettingsConnectionServiceDelegate : NSObject <AFSettingsServiceDelegate> {
    AFSettingsConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSettingsConnection:(id)a0;
- (void).cxx_destruct;

@end

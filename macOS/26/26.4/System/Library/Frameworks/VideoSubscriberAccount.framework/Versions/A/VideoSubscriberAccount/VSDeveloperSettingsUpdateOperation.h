@class VSDeveloperServiceConnection, VSOptional, VSDeveloperSettings;

@interface VSDeveloperSettingsUpdateOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) VSDeveloperServiceConnection *connection;
@property (copy, nonatomic) VSDeveloperSettings *settings;

- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;
- (void)executionDidBegin;
- (id)init;

@end

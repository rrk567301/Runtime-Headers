@class NSString, NSXPCConnection;

@interface TIPreferencesControllerClient : TIPreferencesController {
    NSXPCConnection *_connection;
    char _writeable;
}

@property (retain, nonatomic) NSString *machName;
@property (nonatomic) char isValid;

+ (id)serviceInterface;
+ (id)sharedPreferencesController;

- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_disconnect;
- (void)_pushValue:(id)a0 toPreference:(id)a1 domain:(id)a2;
- (void)createConnectionIfNecessary;
- (void)performWithWriteability:(char)a0 operations:(id /* block */)a1;
- (void)updateInputModes:(id)a0;

@end

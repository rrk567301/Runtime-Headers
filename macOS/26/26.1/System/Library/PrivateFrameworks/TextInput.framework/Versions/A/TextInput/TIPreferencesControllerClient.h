@class NSString, NSXPCConnection;

@interface TIPreferencesControllerClient : TIPreferencesController {
    NSXPCConnection *_connection;
    BOOL _writeable;
}

@property (retain, nonatomic) NSString *machName;
@property (nonatomic) BOOL isValid;

+ (id)sharedPreferencesController;
+ (id)serviceInterface;

- (void)_pushValue:(id)a0 toPreference:(id)a1 domain:(id)a2;
- (void)_disconnect;
- (void)updateInputModes:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)performWithWriteability:(BOOL)a0 operations:(id /* block */)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)createConnectionIfNecessary;
- (id)init;

@end

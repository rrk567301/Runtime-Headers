@class NSString, NSXPCConnection;

@interface TIPreferencesControllerClient : TIPreferencesController {
    NSXPCConnection *_connection;
    BOOL _writeable;
}

@property (retain, nonatomic) NSString *machName;
@property (nonatomic) BOOL isValid;

+ (id)serviceInterface;
+ (id)sharedPreferencesController;

- (void)_disconnect;
- (void)performWithWriteability:(BOOL)a0 operations:(id /* block */)a1;
- (id)init;
- (void)createConnectionIfNecessary;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateInputModes:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)_pushValue:(id)a0 toPreference:(id)a1 domain:(id)a2;

@end

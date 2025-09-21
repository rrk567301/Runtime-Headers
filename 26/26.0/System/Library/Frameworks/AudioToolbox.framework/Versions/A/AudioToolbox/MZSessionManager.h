@interface MZSessionManager : NSObject {
    id _application;
    id _uiapplication;
}

+ (id)instance;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)handleEnteredBackground;
- (void)handleEnteredForeground;
- (BOOL)sessionCanActivate;

@end

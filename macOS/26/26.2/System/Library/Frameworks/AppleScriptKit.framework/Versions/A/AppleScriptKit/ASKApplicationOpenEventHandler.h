@interface ASKApplicationOpenEventHandler : ASKApplicationEventHandler {
    long long _oldHandlerRefCon;
    void /* function */ *_oldOpenEventHandlerUPP;
    void /* function */ *_openEventHandlerUPP;
}

- (void)enable;
- (void)disable;
- (void)handleAppleEvent:(id)a0 withReplyEvent:(id)a1;
- (void)willFinishLaunching:(id)a0;

@end

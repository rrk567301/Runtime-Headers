@interface MKThreadContext : NSObject {
    long long _CA_disableActionsCounter;
}

+ (id)currentContext;

- (void)_CA_setDisableActions:(char)a0;

@end

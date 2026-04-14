@class DMManager;

@interface DMEraseDiskPrivVars : NSObject {
    struct __DASession { } *_clientDASession;
    DMManager *_dmManager;
    char _sessionUUID[40];
    unsigned int _sessionF2Tport;
    unsigned int _sessionT2Fport;
}

@end

@class DMManager;

@interface DMAppleRAIDPrivVars : NSObject {
    DMManager *_dmManager;
    char _sessionUUID[40];
    unsigned int _sessionF2Tport;
    unsigned int _sessionT2Fport;
}

@end

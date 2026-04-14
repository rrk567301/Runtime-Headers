@class DMManager, NSMutableDictionary;

@interface DMAPFSPrivVars : NSObject {
    DMManager *_dmManager;
    char _sessionUUID[40];
    unsigned int _sessionF2Tport;
    unsigned int _sessionT2Fport;
    BOOL _inquiryCache_Enable;
    NSMutableDictionary *_inquiryCache_MDict;
}

@end

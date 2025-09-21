@class NSDictionary, NSMutableData, NSMutableDictionary;

@interface PKGSpaceWindowManager : NSObject {
    NSDictionary *_displaySpaceList;
    unsigned long long _transactionCount;
    NSMutableData *_transactionNotificationData;
    NSMutableDictionary *_spaceIDToBatchReassociatedWindows;
    unsigned int _sessionID;
}

- (id)init;
- (void).cxx_destruct;

@end

@class NSMutableData, NSMutableDictionary;

@interface PKGSpaceWindowManager : NSObject {
    unsigned long long _transactionCount;
    NSMutableData *_transactionNotificationData;
    NSMutableDictionary *_spaceIDToBatchReassociatedWindows;
}

- (id)init;
- (void).cxx_destruct;

@end

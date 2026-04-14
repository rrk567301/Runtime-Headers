@interface IMDowntimeConversationListRemoteNotifier : NSObject {
    void /* unknown type, empty encoding */ debounceTask;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)setNeedsUpdate;
- (void)notifyListChanged;

@end

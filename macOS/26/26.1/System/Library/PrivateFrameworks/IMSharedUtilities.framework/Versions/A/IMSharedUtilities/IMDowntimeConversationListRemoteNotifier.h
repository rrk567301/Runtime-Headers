@interface IMDowntimeConversationListRemoteNotifier : NSObject {
    void /* unknown type, empty encoding */ debounceTask;
}

+ (id)sharedInstance;

- (void)setNeedsUpdate;
- (void).cxx_destruct;
- (id)init;
- (void)notifyListChanged;

@end

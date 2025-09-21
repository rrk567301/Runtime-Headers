@interface WKFullKeyboardAccessWatcher : NSObject {
    char fullKeyboardAccessEnabled;
}

+ (char)fullKeyboardAccessEnabled;

- (id)init;
- (void)notifyAllProcessPools;
- (void)retrieveKeyboardUIModeFromPreferences:(id)a0;

@end

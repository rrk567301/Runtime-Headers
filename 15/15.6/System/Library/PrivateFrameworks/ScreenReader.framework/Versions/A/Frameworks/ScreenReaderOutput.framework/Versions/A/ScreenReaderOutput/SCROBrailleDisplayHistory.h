@interface SCROBrailleDisplayHistory : NSObject {
    struct __CFArray { } *_announcements;
    struct __CFArray { } *_unreadSnapshot;
    long long _currentIndex;
    long long _unreadCount;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)addString:(id)a0;
- (char)_moveIndexBy:(long long)a0;
- (id)currentString;
- (char)hasUnread;
- (char)isOnMostRecent;
- (void)markSnapshotAsRead;
- (void)moveToMostRecent;
- (char)moveToNext;
- (char)moveToPrevious;
- (void)snapshotUnread;

@end

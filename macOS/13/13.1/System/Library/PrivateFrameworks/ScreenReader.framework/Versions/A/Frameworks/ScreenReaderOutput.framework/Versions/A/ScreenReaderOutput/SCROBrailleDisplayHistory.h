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
- (void)snapshotUnread;
- (void)markSnapshotAsRead;
- (BOOL)hasUnread;
- (id)currentString;
- (BOOL)moveToNext;
- (BOOL)moveToPrevious;
- (BOOL)_moveIndexBy:(long long)a0;
- (BOOL)isOnMostRecent;
- (void)moveToMostRecent;

@end

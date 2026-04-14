@class NSMutableArray;

@interface IMAPMailboxSyncState : NSObject {
    NSMutableArray *_uids;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)resizeUpTo:(unsigned long long)a0;
- (unsigned int)uidForMessageNumber:(unsigned long long)a0;
- (void)setUID:(unsigned int)a0 forMessageNumber:(unsigned long long)a1;
- (void)removeMessageNumber:(unsigned long long)a0;
- (unsigned long long)messageNumberForUID:(unsigned int)a0 orRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)removeAllMessageNumbers;

@end

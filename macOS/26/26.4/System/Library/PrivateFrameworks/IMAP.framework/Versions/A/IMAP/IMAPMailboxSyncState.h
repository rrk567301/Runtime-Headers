@class NSMutableArray;

@interface IMAPMailboxSyncState : NSObject {
    NSMutableArray *_uids;
}

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (unsigned long long)messageNumberForUID:(unsigned int)a0 orRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)removeAllMessageNumbers;
- (void)removeMessageNumber:(unsigned long long)a0;
- (void)resizeUpTo:(unsigned long long)a0;
- (void)setUID:(unsigned int)a0 forMessageNumber:(unsigned long long)a1;
- (unsigned int)uidForMessageNumber:(unsigned long long)a0;

@end

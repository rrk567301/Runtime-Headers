@class KHDBRidList;

@interface KHDBRidIter : NSObject <NSCopying> {
    KHDBRidList *m_ridList;
    unsigned long long m_arrayIndex;
    unsigned long long m_lastRid;
    BOOL m_atBegin;
    BOOL m_atEnd;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (unsigned long long)count;
- (void)reset;
- (BOOL)atEnd;
- (id)initWithRidList:(id)a0;
- (BOOL)nextRid:(unsigned long long *)a0;
- (id)nextRidAsNumber;
- (void)gotoBegin;
- (void)setRidList:(id)a0;
- (void)gotoRid:(unsigned long long)a0;

@end

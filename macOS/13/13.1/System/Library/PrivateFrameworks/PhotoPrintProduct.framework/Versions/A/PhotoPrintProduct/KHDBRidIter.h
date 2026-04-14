@class KHDBRidList;

@interface KHDBRidIter : NSObject <NSCopying> {
    KHDBRidList *m_ridList;
    unsigned long long m_arrayIndex;
    unsigned long long m_lastRid;
    BOOL m_atBegin;
    BOOL m_atEnd;
}

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)reset;
- (BOOL)atEnd;
- (id)initWithRidList:(id)a0;
- (void)setRidList:(id)a0;
- (void)gotoBegin;
- (void)gotoRid:(unsigned long long)a0;
- (BOOL)nextRid:(unsigned long long *)a0;
- (id)nextRidAsNumber;

@end

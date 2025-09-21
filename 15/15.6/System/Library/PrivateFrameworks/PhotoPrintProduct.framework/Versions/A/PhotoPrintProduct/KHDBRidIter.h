@class KHDBRidList;

@interface KHDBRidIter : NSObject <NSCopying> {
    KHDBRidList *m_ridList;
    unsigned long long m_arrayIndex;
    unsigned long long m_lastRid;
    char m_atBegin;
    char m_atEnd;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)count;
- (void)reset;
- (char)atEnd;
- (id)nextRidAsNumber;
- (void)gotoBegin;
- (void)gotoRid:(unsigned long long)a0;
- (id)initWithRidList:(id)a0;
- (char)nextRid:(unsigned long long *)a0;
- (void)setRidList:(id)a0;

@end

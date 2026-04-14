@interface KHDBRidArray : NSObject <NSCopying, NSCoding> {
    unsigned long long m_startOffset;
    unsigned int m_ridCount;
    unsigned int m_array[32];
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (unsigned long long)count;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)start;
- (unsigned long long)end;
- (void)empty;
- (BOOL)setRid:(unsigned long long)a0;
- (id)initWithBytes:(const char **)a0;
- (BOOL)overlapsWith:(id)a0;
- (BOOL)isSubsetOf:(id)a0;
- (BOOL)isSet:(unsigned long long)a0;
- (long long)rangeCompare:(unsigned long long)a0;
- (BOOL)clearRid:(unsigned long long)a0;
- (void)orRids:(id)a0;
- (void)andRids:(id)a0;
- (void)diffRids:(id)a0;
- (id)initWithOffset:(unsigned long long)a0;
- (void)_setAllRids;
- (BOOL)inRange:(unsigned long long)a0;
- (unsigned long long)countRidsNow;
- (BOOL)nextRid:(unsigned long long *)a0 afterRid:(unsigned long long)a1;
- (BOOL)firstRid:(unsigned long long *)a0;
- (unsigned long long)_ridFromAddress:(unsigned long long)a0 withOffset:(unsigned long long)a1;
- (void)appendToData:(id)a0;
- (void)clearRange:(unsigned long long)a0 to:(unsigned long long)a1;
- (BOOL)lastRid:(unsigned long long *)a0;
- (void)appendToIndexSet:(id)a0;
- (void)appendToArrayOfNumbers:(id)a0;
- (void)appendToSetOfNumbers:(id)a0;

@end

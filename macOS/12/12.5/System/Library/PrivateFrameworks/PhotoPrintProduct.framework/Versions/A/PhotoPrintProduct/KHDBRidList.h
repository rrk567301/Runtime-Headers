@class NSMutableArray;

@interface KHDBRidList : NSObject <NSCopying, NSCoding> {
    unsigned long long m_ridCount;
    NSMutableArray *m_ridArrays;
    unsigned long long m_lastOffsetFoundAt;
}

@property BOOL isDirty;

+ (id)listFromNumbers:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (unsigned long long)count;
- (BOOL)isEmpty;
- (void)lock;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)unlock;
- (void)empty;
- (BOOL)setRid:(unsigned long long)a0;
- (BOOL)overlapsWith:(id)a0;
- (unsigned long long)_arrayCount;
- (id)encodeAsData;
- (BOOL)isSubsetOf:(id)a0;
- (BOOL)isSet:(unsigned long long)a0;
- (BOOL)clearRid:(unsigned long long)a0;
- (void)orRids:(id)a0;
- (unsigned long long)firstRid;
- (unsigned long long)lastRid;
- (void)andRids:(id)a0;
- (void)diffRids:(id)a0;
- (id)asSetOfNumbers;
- (id)asArrayOfLimitedArraysOfNumbers:(unsigned long long)a0;
- (id)_arrayAtIndex:(unsigned long long)a0;
- (void)_addArray:(id)a0;
- (void)clearRange:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)verifyRidList;
- (id)ridArrays;
- (id)asCommaSeparatedString;
- (unsigned long long)_findOffset:(unsigned long long)a0 fromLow:(unsigned long long)a1 toHigh:(unsigned long long)a2;
- (unsigned long long)_findOffset:(unsigned long long)a0;
- (id)firstRidArray;
- (id)extractFirstRidArray;
- (void)andNumbers:(id)a0;
- (void)orNumbers:(id)a0;
- (void)diffNumbers:(id)a0;
- (id)asIndexSet;
- (id)asArrayOfNumbers;
- (void)setRidsUsingList:(id)a0;
- (void)setRidsUsingIndexSet:(id)a0;
- (id)extractLastRidArray;
- (id)extractBatch:(unsigned long long)a0;

@end

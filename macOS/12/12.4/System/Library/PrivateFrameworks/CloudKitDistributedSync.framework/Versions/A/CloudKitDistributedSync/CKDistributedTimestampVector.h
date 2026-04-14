@class NSMutableArray;

@interface CKDistributedTimestampVector : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *timestampArray;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)timestampAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (id)timestamps;
- (id)initWithTimestamps:(id)a0;
- (void)addTimestamp:(id)a0;
- (unsigned long long)timestampCount;
- (long long)indexForTimestampForSiteIdentifier:(id)a0;
- (id)sequentialSiteIdentifiers;
- (id)timestampForSiteIdentifier:(id)a0;
- (BOOL)_isGreaterThanOrEqualToTimestamp:(id)a0;
- (long long)compareToTimestampVector:(id)a0;
- (id)initWithTimestampClockVector:(id)a0 fillingInGaps:(BOOL)a1;
- (id)minimalTimestampWith:(id)a0;

@end

@class NSMutableArray;

@interface CKDistributedTimestampVector : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *timestampArray;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)mergeFrom:(id)a0;
- (id)timestampAtIndex:(unsigned long long)a0;
- (id)timestamps;
- (unsigned long long)timestampCount;
- (id)initWithTimestamps:(id)a0;
- (void)addTimestamp:(id)a0;
- (id)initWithTimestampClockVector:(id)a0 fillingInGaps:(BOOL)a1;
- (long long)indexForTimestampForSiteIdentifier:(id)a0;
- (id)timestampForSiteIdentifier:(id)a0;
- (id)sequentialSiteIdentifiers;
- (BOOL)_isGreaterThanOrEqualToTimestamp:(id)a0;
- (long long)compareToTimestampVector:(id)a0;
- (id)minimalTimestampWith:(id)a0;

@end

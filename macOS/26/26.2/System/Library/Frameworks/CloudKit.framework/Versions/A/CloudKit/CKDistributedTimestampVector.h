@class NSMutableArray;

@interface CKDistributedTimestampVector : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *timestampArray;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)timestamps;
- (id)description;
- (id)initWithTimestamps:(id)a0;
- (void)addTimestamp:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)timestampAtIndex:(unsigned long long)a0;
- (BOOL)_isGreaterThanOrEqualToTimestamp:(id)a0;
- (long long)compareToTimestampVector:(id)a0;
- (long long)indexForTimestampForSiteIdentifier:(id)a0;
- (id)initWithTimestampClockVector:(id)a0 fillingInGaps:(BOOL)a1;
- (id)minimalTimestampWith:(id)a0;
- (id)sequentialSiteIdentifiers;
- (unsigned long long)timestampCount;
- (id)timestampForSiteIdentifier:(id)a0;

@end

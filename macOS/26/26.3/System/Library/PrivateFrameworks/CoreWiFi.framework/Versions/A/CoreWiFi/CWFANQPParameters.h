@class NSArray;

@interface CWFANQPParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *scanResults;
@property (copy, nonatomic) NSArray *ANQPElementIDList;
@property (nonatomic) unsigned long long acceptableCacheAge;
@property (nonatomic) unsigned long long maximumAge;
@property (nonatomic) unsigned long long minimumTimestamp;
@property (nonatomic) unsigned long long maximumCacheAge;
@property (nonatomic) BOOL cacheOnly;
@property (nonatomic) BOOL includeMatchingKnownNetworkProfiles;

- (BOOL)cacheOnly;
- (id)description;
- (void)setMaximumCacheAge:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setCacheOnly:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)maximumCacheAge;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToANQPParameters:(id)a0;

@end

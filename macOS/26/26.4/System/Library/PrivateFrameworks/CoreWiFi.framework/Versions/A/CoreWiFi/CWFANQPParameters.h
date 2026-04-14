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

- (void)setMaximumCacheAge:(unsigned long long)a0;
- (unsigned long long)maximumCacheAge;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setCacheOnly:(BOOL)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)cacheOnly;
- (BOOL)isEqualToANQPParameters:(id)a0;

@end

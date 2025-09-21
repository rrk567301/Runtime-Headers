@class NSArray;

@interface CWFANQPParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *scanResults;
@property (copy, nonatomic) NSArray *ANQPElementIDList;
@property (nonatomic) unsigned long long acceptableCacheAge;
@property (nonatomic) unsigned long long maximumAge;
@property (nonatomic) unsigned long long minimumTimestamp;
@property (nonatomic) unsigned long long maximumCacheAge;
@property (nonatomic) char cacheOnly;
@property (nonatomic) char includeMatchingKnownNetworkProfiles;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)maximumCacheAge;
- (char)cacheOnly;
- (char)isEqualToANQPParameters:(id)a0;
- (void)setCacheOnly:(char)a0;
- (void)setMaximumCacheAge:(unsigned long long)a0;

@end

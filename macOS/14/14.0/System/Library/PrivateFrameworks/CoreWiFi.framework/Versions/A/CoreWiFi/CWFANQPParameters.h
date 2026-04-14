@class NSArray;

@interface CWFANQPParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *scanResults;
@property (copy, nonatomic) NSArray *ANQPElementIDList;
@property (nonatomic) unsigned long long maximumCacheAge;
@property (nonatomic) BOOL cacheOnly;
@property (nonatomic) BOOL includeMatchingKnownNetworkProfiles;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToANQPParameters:(id)a0;

@end

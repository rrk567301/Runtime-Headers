@class NSArray;

@interface GEOCacheInvalidationData : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double ttl;
@property (readonly, nonatomic) unsigned int version;
@property (readonly, nonatomic) NSArray *versionDomains;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_isKey:(id)a0 subsetOf:(id)a1;
- (id)initWithTimestamp:(double)a0 ttl:(double)a1 version:(unsigned int)a2 domains:(id)a3;
- (char)isInvalidatedByServiceVersion:(unsigned int)a0 domains:(id)a1;

@end

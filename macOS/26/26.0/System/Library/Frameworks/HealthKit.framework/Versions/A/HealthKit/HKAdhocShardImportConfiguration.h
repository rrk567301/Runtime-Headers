@class NSString, NSURL;

@interface HKAdhocShardImportConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) BOOL shouldPruneOldShard;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 url:(id)a1 version:(long long)a2 shouldPruneOldShard:(BOOL)a3;

@end

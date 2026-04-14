@class NSString;

@interface HKOntologyVersion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *string;

- (unsigned long long)hash;
- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initEmptyVersion;
- (id)description;
- (BOOL)isEmptyVersion;
- (id)initWithCoder:(id)a0;
- (id)initWithShardEntries:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end

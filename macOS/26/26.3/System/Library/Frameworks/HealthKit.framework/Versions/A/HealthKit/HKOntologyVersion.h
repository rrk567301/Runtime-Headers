@class NSString;

@interface HKOntologyVersion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *string;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initEmptyVersion;
- (id)initWithShardEntries:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEmptyVersion;
- (void)encodeWithCoder:(id)a0;

@end

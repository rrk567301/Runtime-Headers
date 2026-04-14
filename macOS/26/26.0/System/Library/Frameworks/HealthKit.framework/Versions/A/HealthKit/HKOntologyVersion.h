@class NSString;

@interface HKOntologyVersion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *string;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithShardEntries:(id)a0;
- (id)init;
- (id)description;
- (BOOL)isEmptyVersion;
- (id)initWithString:(id)a0;
- (id)initEmptyVersion;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

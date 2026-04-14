@class NSString;

@interface HKOntologyVersion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *string;

- (id)initWithString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEmptyVersion;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initEmptyVersion;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithShardEntries:(id)a0;

@end

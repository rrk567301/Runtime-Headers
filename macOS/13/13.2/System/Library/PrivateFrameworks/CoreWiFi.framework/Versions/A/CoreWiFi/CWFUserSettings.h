@class NSDictionary;

@interface CWFUserSettings : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long syncMode;
@property (nonatomic) long long askToJoinMode;
@property (nonatomic) long long autoHotspotMode;
@property (nonatomic) long long compatibilityMode;
@property (copy, nonatomic) NSDictionary *OSSpecificAttributes;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToUserSettings:(id)a0;

@end

@class NSSet, NSDictionary, NSString;

@interface _ICProactiveTrigger : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char triggerSourceType;
@property (retain, nonatomic) NSSet *availableApps;
@property (readonly, nonatomic) NSDictionary *attributedString;
@property (readonly, nonatomic) NSString *contentType;

+ (BOOL)isEquivalentDictionary:(id)a0 second:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithContext:(id)a0 inputContextHistory:(id)a1 contentType:(id)a2;
- (id)initWithSource:(unsigned char)a0 attributes:(id)a1;
- (BOOL)isEqualToProactiveTrigger:(id)a0;

@end

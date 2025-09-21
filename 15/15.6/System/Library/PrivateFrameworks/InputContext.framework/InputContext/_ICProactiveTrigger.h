@class NSSet, NSDictionary, NSString;

@interface _ICProactiveTrigger : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned char triggerSourceType;
@property (retain, nonatomic) NSSet *availableApps;
@property (readonly, nonatomic) NSDictionary *attributedString;
@property (readonly, nonatomic) NSString *contentType;

+ (char)isEquivalentDictionary:(id)a0 second:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContext:(id)a0 inputContextHistory:(id)a1 contentType:(id)a2;
- (id)initWithSource:(unsigned char)a0 attributes:(id)a1;
- (char)isEqualToProactiveTrigger:(id)a0;

@end

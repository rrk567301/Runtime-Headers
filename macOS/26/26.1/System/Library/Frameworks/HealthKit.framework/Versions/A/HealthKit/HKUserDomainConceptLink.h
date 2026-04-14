@class NSUUID, HKUserDomainConceptLinkStructWrapper;

@interface HKUserDomainConceptLink : NSObject <NSCopying, NSSecureCoding> {
    HKUserDomainConceptLinkStructWrapper *_implementation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSUUID *targetUUID;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithLinkStructWrapper:(id)a0;
- (id)initWithTarget:(id)a0 type:(long long)a1;
- (id)initWithUserConcept:(id)a0 type:(long long)a1;

@end

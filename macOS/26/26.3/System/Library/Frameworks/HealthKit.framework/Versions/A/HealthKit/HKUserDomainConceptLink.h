@class NSUUID, HKUserDomainConceptLinkStructWrapper;

@interface HKUserDomainConceptLink : NSObject <NSCopying, NSSecureCoding> {
    HKUserDomainConceptLinkStructWrapper *_implementation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSUUID *targetUUID;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLinkStructWrapper:(id)a0;
- (id)initWithTarget:(id)a0 type:(long long)a1;
- (id)initWithUserConcept:(id)a0 type:(long long)a1;

@end

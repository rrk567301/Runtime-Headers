@class NSUUID, HKUserDomainConceptLinkStructWrapper;

@interface HKUserDomainConceptLink : NSObject <NSCopying, NSSecureCoding> {
    HKUserDomainConceptLinkStructWrapper *_implementation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSUUID *targetUUID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithLinkStructWrapper:(id)a0;
- (id)initWithTarget:(id)a0 type:(long long)a1;
- (id)initWithUserConcept:(id)a0 type:(long long)a1;

@end

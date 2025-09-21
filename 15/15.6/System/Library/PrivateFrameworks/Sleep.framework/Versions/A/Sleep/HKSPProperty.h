@class NSArray, NSString;

@interface HKSPProperty : NSObject <NSSecureCoding, NSCopying, BSDescriptionProviding>

@property (class, readonly, nonatomic) NSArray *allowedSubclassesForSecureCoding;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *allowedInnerClassesForSecureCoding;
@property (readonly, nonatomic) char isRelationshipProperty;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *propertyName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)decodeValueForObject:(id)a0 fromCoder:(id)a1;
- (void)encodeValueForObject:(id)a0 fromCoder:(id)a1;
- (void)copyValueFromObject:(id)a0 toObject:(id)a1;
- (id)initWithIdentifier:(id)a0 propertyName:(id)a1;

@end

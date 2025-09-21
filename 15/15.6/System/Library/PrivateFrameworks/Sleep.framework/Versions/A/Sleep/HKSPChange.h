@class HKSPProperty, NSString;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface HKSPChange : NSObject <NSSecureCoding, NSCopying, BSDescriptionProviding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) HKSPProperty *property;
@property (readonly, nonatomic) id<NSObject, NSSecureCoding, NSCopying> changedValue;
@property (readonly, nonatomic) id<NSObject, NSSecureCoding, NSCopying> originalValue;
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
- (id)deepCopy;
- (id)initWithProperty:(id)a0 changedValue:(id)a1 originalValue:(id)a2;

@end

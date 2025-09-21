@class NSString;

@interface BCSBusinessLinkContentItemModel : NSObject <BSDescriptionProviding, BCSBusinessLinkContentItemDescribing, NSCopying, NSSecureCoding> {
    char _isDefault;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=isDefault) char isDefault;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *title;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithBusinessLinkContent:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 language:(id)a2 isDefault:(char)a3;

@end

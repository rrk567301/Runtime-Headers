@class NSString;

@interface BCSBusinessLinkContentItemModel : NSObject <BSDescriptionProviding, BCSBusinessLinkContentItemDescribing, NSCopying, NSSecureCoding> {
    BOOL _isDefault;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isDefault) BOOL isDefault;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *title;

- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBusinessLinkContent:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 language:(id)a2 isDefault:(BOOL)a3;

@end

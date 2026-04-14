@class NSString;

@interface CHSWidgetMargins : NSObject <BSXPCCoding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isDawnCompatible) BOOL dawnCompatible;
@property (readonly, nonatomic) struct CHSEdgeInsets { double top; double leading; double bottom; double trailing; } safeAreaInsets;
@property (readonly, nonatomic) struct CHSEdgeInsets { double top; double leading; double bottom; double trailing; } layoutInsets;
@property (readonly, nonatomic) struct CHSEdgeInsets { double top; double leading; double bottom; double trailing; } contentMargins;
@property (readonly, nonatomic) struct CHSEdgeInsets { double top; double leading; double bottom; double trailing; } backgroundRemovedContentMargins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hashUsing32BitFloats:(BOOL)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualTo:(id)a0 using32BitFloats:(BOOL)a1;
- (long long)compare:(id)a0;
- (id)succinctDescription;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)initWithSafeAreaInsets:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a0 layoutInsets:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a1 contentMargins:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a2 backgroundRemovedContentMargins:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a3;

@end

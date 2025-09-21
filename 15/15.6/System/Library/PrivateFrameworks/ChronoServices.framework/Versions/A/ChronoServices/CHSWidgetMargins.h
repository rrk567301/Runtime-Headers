@class NSString;

@interface CHSWidgetMargins : NSObject <BSXPCCoding, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) struct CHSEdgeInsets { double top; double leading; double bottom; double trailing; } safeAreaInsets;
@property (readonly, nonatomic) struct CHSEdgeInsets { double top; double leading; double bottom; double trailing; } layoutInsets;
@property (readonly, nonatomic) struct CHSEdgeInsets { double top; double leading; double bottom; double trailing; } contentMargins;
@property (readonly, nonatomic) struct CHSEdgeInsets { double top; double leading; double bottom; double trailing; } backgroundRemovedContentMargins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithSafeAreaInsets:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a0 layoutInsets:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a1 contentMargins:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a2 backgroundRemovedContentMargins:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })a3;

@end

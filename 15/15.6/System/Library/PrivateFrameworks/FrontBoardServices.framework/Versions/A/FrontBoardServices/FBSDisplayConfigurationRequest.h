@class NSString;

@interface FBSDisplayConfigurationRequest : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long overscanCompensation;
@property (readonly, nonatomic) struct CGSize { double width; double height; } nativePixelSize;
@property (readonly, nonatomic) double pointScale;
@property (readonly, nonatomic) double refreshRate;
@property (readonly, nonatomic) long long hdrMode;
@property (readonly, nonatomic) struct CGSize { double width; double height; } logicalScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

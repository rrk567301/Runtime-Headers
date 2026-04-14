@class NSString;

@interface RBSAttribute : NSObject <RBSXPCSecureCoding, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)init;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end

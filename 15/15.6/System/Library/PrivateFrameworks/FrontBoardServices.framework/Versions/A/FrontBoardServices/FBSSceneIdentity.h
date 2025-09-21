@class NSString;

@interface FBSSceneIdentity : NSObject <BSXPCSecureCoding, NSSecureCoding, NSCopying, NSMutableCopying> {
    NSString *_internalWorkspaceIdentifier;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *internalWorkspaceIdentifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *workspaceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsBSXPCSecureCoding;
+ (id)identityForIdentifier:(id)a0;
+ (id)identityForIdentifier:(id)a0 workspaceIdentifier:(id)a1;
+ (id)identityForIdentifier:(id)a0 workspaceIdentifier:(id)a1 internalWorkspaceIdentifier:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (char)isValid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;

@end

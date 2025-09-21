@class NSString;

@interface CHSDescriptorEnablementChangeRequest : NSObject <BSXPCSecureCoding>

@property (readonly, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, nonatomic) char enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsBSXPCSecureCoding;

@end

@class NSMutableDictionary, NSSet, NSURL, NSString;

@interface FBSOpenApplicationOptions : NSObject <BSXPCCoding, BSXPCSecureCoding, NSCopying>

@property (copy, nonatomic) NSMutableDictionary *dictionary;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSSet *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)optionsWithDictionary:(id)a0;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_updateOption:(id)a0 forKey:(id)a1;
- (id)initWithBSXPCCoder:(id)a0;
- (id)succinctDescription;
- (void)_sanitizeAndValidatePayload;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;

@end

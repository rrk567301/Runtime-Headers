@class NSString;

@interface WMSProposeKeySceneActionInfo : NSObject <BSXPCSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ fromSceneIdentifier;
    void /* unknown type, empty encoding */ toSceneIdentifier;
}

@property (nonatomic, copy) NSString *fromSceneIdentifier;
@property (nonatomic, copy) NSString *toSceneIdentifier;
@property (nonatomic, readonly) long long hash;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initFromSceneIdentifier:(id)a0 toSceneIdentifier:(id)a1;

@end

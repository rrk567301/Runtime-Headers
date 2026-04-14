@class NSString;

@interface WMSChildSceneInfo : NSObject <BSXPCSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ childSceneIdentifier;
}

@property (nonatomic) void /* unknown type, empty encoding */ positionAboutParent;
@property (nonatomic, copy) NSString *childSceneIdentifier;
@property (nonatomic, readonly) long long hash;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPositionAboutParent:(long long)a0 childSceneIdentifier:(id)a1;

@end

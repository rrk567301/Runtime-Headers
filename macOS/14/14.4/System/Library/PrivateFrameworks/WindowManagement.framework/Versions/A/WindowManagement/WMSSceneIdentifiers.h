@class NSArray;

@interface WMSSceneIdentifiers : NSObject <BSXPCSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ sceneIdentifiers;
}

@property (nonatomic, copy) NSArray *sceneIdentifiers;
@property (nonatomic, readonly) long long hash;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSceneIdentifiers:(id)a0;

@end

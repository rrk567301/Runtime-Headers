@class NSString;

@interface GKGamePolicyApp : GKInternalRepresentation

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *adamID;
@property (readonly, nonatomic) BOOL isGame;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 adamID:(id)a1 isGame:(BOOL)a2;

@end

@class NSOrderedSet, NSString, FBSSceneIdentityToken;

@interface FBSSceneClientSettings : FBSSettings <FBSSceneClientSettings, NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSOrderedSet *layers;
@property (readonly, nonatomic) double preferredLevel;
@property (readonly, nonatomic) long long preferredInterfaceOrientation;
@property (readonly, copy, nonatomic) NSString *preferredSceneHostIdentifier;
@property (readonly, copy, nonatomic) FBSSceneIdentityToken *preferredSceneHostIdentity;

+ (id)settings;
+ (Class)_mutableClass;
+ (Class)subclassExtension;
+ (id)_settingsExtensionsForSceneExtension:(Class)a0;
+ (Class)_baseClass;
+ (Class)mutableSubclass;
+ (Class)immutableSubclass;
+ (Class)_diffClass;

- (id)initWithSettings:(id)a0;

@end

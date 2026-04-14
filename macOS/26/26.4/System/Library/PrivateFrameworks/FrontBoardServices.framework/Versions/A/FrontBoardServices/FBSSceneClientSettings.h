@class NSOrderedSet, NSString, FBSSceneIdentityToken;

@interface FBSSceneClientSettings : FBSSettings <FBSSceneClientSettings, NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSOrderedSet *layers;
@property (readonly, nonatomic) double preferredLevel;
@property (readonly, nonatomic) long long preferredInterfaceOrientation;
@property (readonly, copy, nonatomic) NSString *preferredSceneHostIdentifier;
@property (readonly, copy, nonatomic) FBSSceneIdentityToken *preferredSceneHostIdentity;

+ (id)settings;
+ (Class)subclassExtension;
+ (Class)mutableSubclass;
+ (Class)_baseClass;
+ (id)_settingsExtensionsForSceneExtension:(Class)a0;
+ (Class)_mutableClass;
+ (Class)immutableSubclass;
+ (Class)_diffClass;

- (id)initWithSettings:(id)a0;

@end

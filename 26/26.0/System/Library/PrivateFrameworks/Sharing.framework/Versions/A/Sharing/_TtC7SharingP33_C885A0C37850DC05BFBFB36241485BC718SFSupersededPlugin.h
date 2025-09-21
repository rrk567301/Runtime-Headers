@class NSXPCConnection, NSString, NSURL, NSUUID, NSDate, NSArray, NSDictionary, NSError, NSBundle;
@protocol PKPlugIn, PKLaunchRequest;

@interface _TtC7SharingP33_C885A0C37850DC05BFBFB36241485BC718SFSupersededPlugin : NSObject <PKPlugInPrivate> {
    void /* unknown type, empty encoding */ _innerPlugin;
    void /* unknown type, empty encoding */ _sfSupersededBy;
}

@property (nonatomic, readonly) id<PKPlugIn> supersededBy;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSURL *containingUrl;
@property (nonatomic, readonly) BOOL onSystemVolume;
@property (nonatomic, readonly) NSDictionary *bundleInfoDictionary;
@property (nonatomic, readonly) NSDictionary *plugInDictionary;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSDictionary *entitlements;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *localizedShortName;
@property (nonatomic, readonly) NSString *localizedContainingName;
@property (nonatomic, readonly) NSDictionary *localizedFileProviderActionNames;
@property (nonatomic) long long userElection;
@property (nonatomic, readonly) NSUUID *multipleInstanceUUID;
@property (nonatomic, readonly) BOOL spent;
@property (nonatomic, readonly) BOOL active;
@property (nonatomic, readonly) id plugInPrincipal;
@property (nonatomic, readonly) id embeddedPrincipal;
@property (nonatomic, readonly) NSBundle *embeddedBundle;
@property (nonatomic, copy) id /* block */ notificationBlock;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) NSXPCConnection *pluginConnection;
@property (nonatomic, copy) NSDictionary *extensionState;
@property (nonatomic, copy) NSDictionary *environment;
@property (nonatomic, copy) NSArray *preferredLanguages;
@property (nonatomic, readonly) NSArray *launchPersonas;
@property (nonatomic, copy) NSString *sandboxProfile;
@property (nonatomic, readonly) unsigned int extensionPointPlatform;

- (void)localizedInfoDictionaryForKeys:(NSArray *)a0 completion:(void (^)(NSDictionary *, NSError *))a1;
- (id)export:(id *)a0;
- (BOOL)useBundle:(id)a0 error:(id *)a1;
- (void)setReplyQueue:(id)a0;
- (void)beginUsingRequest:(id<PKLaunchRequest>)a0 withSubsystemOptions:(NSDictionary *)a1 completion:(void (^)(NSError *))a2;
- (void)endUsing:(id /* block */)a0;
- (void)beginUsingRequest:(id<PKLaunchRequest>)a0 completion:(void (^)(NSError *))a1;
- (BOOL)beginUsingRequest:(id)a0 withSubsystemOptions:(id)a1 error:(id *)a2;
- (void)endUsingRequest:(id<PKLaunchRequest>)a0 completion:(void (^)(NSError *))a1;
- (BOOL)beginUsingWithSubsystemOptions:(id)a0 error:(id *)a1;
- (id)init;
- (id)createInstanceWithUUID:(id)a0;
- (BOOL)endUsingRequest:(id)a0 error:(id *)a1;
- (BOOL)endUsingWithError:(id *)a0;
- (BOOL)beginUsingWithError:(id *)a0;
- (id)defaults;
- (BOOL)beginUsingRequest:(id)a0 error:(id *)a1;
- (void)beginUsing:(id /* block */)a0;
- (void).cxx_destruct;
- (void)beginUsingWithSubsystemOptions:(NSDictionary *)a0 completion:(void (^)(NSError *))a1;
- (void)setHostPrincipal:(id)a0 withProtocol:(id)a1;

@end

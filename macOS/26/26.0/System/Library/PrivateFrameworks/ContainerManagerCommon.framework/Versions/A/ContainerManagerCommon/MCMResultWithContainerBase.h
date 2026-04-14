@class NSArray, NSUUID, NSString, MCMPOSIXUser, NSURL, NSDictionary, MCMError;

@interface MCMResultWithContainerBase : MCMResultBase <MCMResultWithContainer>

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *containerPathIdentifier;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) MCMPOSIXUser *posixUser;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly, nonatomic) NSString *sandboxToken;
@property (readonly, nonatomic) BOOL existed;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSDictionary *info;
@property (readonly, nonatomic) BOOL transient;
@property (readonly, nonatomic) NSString *userManagedAssetsRelPath;
@property (readonly, nonatomic) NSString *creator;
@property (readonly, nonatomic) MCMError *error;
@property (readonly, nonatomic) NSArray *warnings;
@property (nonatomic, getter=isCacheable) BOOL cacheable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)encodeResultOntoReply:(id)a0;
- (id)initWithUUID:(id)a0 containerPathIdentifier:(id)a1 identifier:(id)a2 containerClass:(unsigned long long)a3 POSIXUser:(id)a4 personaUniqueString:(id)a5 sandboxToken:(id)a6 existed:(BOOL)a7 url:(id)a8 info:(id)a9 transient:(BOOL)a10 userManagedAssetsRelPath:(id)a11 creator:(id)a12;
- (id)initWithMetadata:(id)a0 sandboxToken:(id)a1 includePath:(BOOL)a2 includeInfo:(BOOL)a3 includeUserManagedAssetsRelPath:(BOOL)a4 includeCreator:(BOOL)a5;
- (id)initWithContainerPath:(id)a0 containerIdentity:(id)a1 uuid:(id)a2 sandboxToken:(id)a3 includePath:(BOOL)a4;
- (void).cxx_destruct;

@end

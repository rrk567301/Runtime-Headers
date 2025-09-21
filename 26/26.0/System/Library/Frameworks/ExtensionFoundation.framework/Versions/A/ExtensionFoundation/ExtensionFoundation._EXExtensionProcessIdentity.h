@class NSData, NSString, NSUUID;

@interface ExtensionFoundation._EXExtensionProcessIdentity : NSObject <RBSExtensionIdentityProtocol> {
    void /* unknown type, empty encoding */ inner;
}

@property (nonatomic, readonly) NSData *dataRepresentation;
@property (nonatomic, readonly) NSString *personaString;
@property (nonatomic, readonly) NSUUID *instanceUUID;
@property (nonatomic, readonly) unsigned int extensionPointType;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)launchdJobDescriptorFor:(id)a0 error:(id *)a1;

@end

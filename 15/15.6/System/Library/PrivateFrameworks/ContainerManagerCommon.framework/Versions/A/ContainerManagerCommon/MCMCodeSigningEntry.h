@class NSDictionary, NSArray;

@interface MCMCodeSigningEntry : NSObject

@property (retain, nonatomic) NSDictionary *codeSigningInfo;
@property (retain, nonatomic) NSArray *childBundleIdentifiers;
@property (nonatomic, getter=isInvalid) char invalid;
@property (nonatomic, getter=isPlaceholder) char placeholder;
@property (nonatomic, getter=isAdvanceCopy) char advanceCopy;
@property (nonatomic, getter=isRegisteredByCaller) char registeredByCaller;
@property (nonatomic, getter=isRegisteredByKernel) char registeredByKernel;
@property (nonatomic) unsigned long long dataContainerClass;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithSerializedDictionary:(id)a0;
- (id)initWithCodeSigningInfo:(id)a0;
- (id)initWithCodeSigningInfo:(id)a0 andDataContainerClass:(unsigned long long)a1;

@end

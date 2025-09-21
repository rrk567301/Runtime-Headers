@class NSDictionary, NSArray;

@interface MCMCodeSigningEntry : NSObject

@property (retain, nonatomic) NSDictionary *codeSigningInfo;
@property (retain, nonatomic) NSArray *childBundleIdentifiers;
@property (nonatomic, getter=isInvalid) BOOL invalid;
@property (nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (nonatomic, getter=isAdvanceCopy) BOOL advanceCopy;
@property (nonatomic, getter=isRegisteredByCaller) BOOL registeredByCaller;
@property (nonatomic, getter=isRegisteredByKernel) BOOL registeredByKernel;
@property (nonatomic) unsigned long long dataContainerClass;

- (id)initWithCodeSigningInfo:(id)a0 andDataContainerClass:(unsigned long long)a1;
- (id)serialize;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCodeSigningInfo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSerializedDictionary:(id)a0;
- (void).cxx_destruct;

@end

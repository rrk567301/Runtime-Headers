@class NSString;

@interface SKAPFSStoreDisk : SKDisk

@property (retain) NSString *apfsContainerUUID;
@property (retain) NSString *apfsContainerIdentifier;
@property (readonly) NSString *apfsUUID;

- (id)container;
- (void)updateWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)minimalDictionaryRepresentation;
- (BOOL)canResize;
- (id)innerDescriptionWithPrivateData:(BOOL)a0;
- (BOOL)isOurContainerWithDisk:(id)a0;

@end

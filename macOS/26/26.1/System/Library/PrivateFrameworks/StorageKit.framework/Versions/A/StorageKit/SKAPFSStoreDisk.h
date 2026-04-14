@class NSString;

@interface SKAPFSStoreDisk : SKDisk

@property (retain) NSString *apfsContainerUUID;
@property (retain) NSString *apfsContainerIdentifier;
@property (readonly) NSString *apfsUUID;

- (void)updateWithDictionary:(id)a0;
- (id)container;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)minimalDictionaryRepresentation;
- (BOOL)canResize;
- (id)innerDescriptionWithPrivateData:(BOOL)a0;
- (BOOL)isOurContainerWithDisk:(id)a0;

@end

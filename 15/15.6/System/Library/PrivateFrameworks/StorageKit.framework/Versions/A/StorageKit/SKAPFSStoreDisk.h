@class NSString;

@interface SKAPFSStoreDisk : SKDisk

@property (retain) NSString *apfsContainerUUID;
@property (retain) NSString *apfsContainerIdentifier;
@property (readonly) NSString *apfsUUID;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)container;
- (void)updateWithDictionary:(id)a0;
- (id)minimalDictionaryRepresentation;
- (char)canResize;
- (id)innerDescriptionWithPrivateData:(char)a0;
- (char)isOurContainerWithDisk:(id)a0;

@end

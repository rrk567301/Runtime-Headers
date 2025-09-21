@class NSSet, NSArray, NSString, TMDisk;

@interface PreparationStrategy : NSObject

@property (readonly) TMDisk *destinationDisk;
@property (readonly) NSSet *sourceDisks;
@property (readonly) unsigned int encryptionIntent;
@property (readonly) unsigned int inheritanceIntent;
@property (readonly) NSArray *conflictingSourceDisks;
@property (readonly) char requiresEncrypting;
@property (readonly) char requiresDecrypting;
@property (readonly) char requiresChangingToCaseSensitive;
@property (readonly) char requiresRepartitioningAsGPT;
@property (readonly) char requiresDeletingCSVolumeGroup;
@property (readonly) char requiresErasing;
@property (readonly) char requiresCreatingSibling;
@property (readonly) char canBeReformatted;
@property (readonly) NSString *fileSystemPersonalityForReformatting;

- (void).cxx_destruct;
- (id)_physicalWholeDiskIdentifiersForMountPoint:(id)a0;
- (char)hasCaseSensitiveSources;
- (id)initForDestinationDisk:(id)a0 sourceDisks:(id)a1 encryptionIntent:(unsigned int)a2 inheritanceIntent:(unsigned int)a3;

@end

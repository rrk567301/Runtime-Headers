@class NSString;

@interface SKAPFSStoreDisk : SKDisk

@property (retain) NSString *apfsUUID;
@property (retain) NSString *apfsContainerUUID;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)container;
- (id)dictionaryRepresentation;
- (void)updateWithDictionary:(id)a0;
- (BOOL)matchesDictionary:(id)a0;
- (id)minimalDictionaryRepresentation;
- (BOOL)canResize;

@end

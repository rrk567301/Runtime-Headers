@class NSSet, NSArray;

@interface PLInterLibraryTransferOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSSet *excludedEntityNames;
@property (copy) NSSet *excludedAttributeNames;
@property char updateExistingObjects;
@property char allowSavedAssetTypeChanges;
@property char ignoreMissingSourceFiles;
@property char ignoreMissingSourceFileURLs;
@property (copy) NSArray *keysForDeDupe;
@property unsigned int allowDeleteOfSavedAssetTypes;
@property char skipContextSave;

+ (id)newTransferOptionsForPersonFromSystemToSyndication;
+ (id)newTransferOptionsForAssetsFromSyndicationToSystem;
+ (id)newTransferOptionsForFaceCropFromSyndicationToSystem;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_sortedEntityNamesAsString;

@end

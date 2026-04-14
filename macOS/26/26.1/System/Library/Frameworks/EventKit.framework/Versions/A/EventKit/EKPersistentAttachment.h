@interface EKPersistentAttachment : EKPersistentObject

+ (id)propertyKeyForUniqueIdentifier;
+ (Class)meltedClass;
+ (id)relations;
+ (id)propertiesToUnloadOnCommit;

- (id)URLString;
- (int)entityType;
- (void)setFileSize:(id)a0;
- (id)externalModificationTag;
- (int)flags;
- (id)fileSize;
- (void)setUUID:(id)a0;
- (void)setFlags:(int)a0;
- (void)setExternalModificationTag:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fileFormat;
- (id)externalID;
- (id)UUID;
- (void)setExternalID:(id)a0;
- (void)setFileFormat:(id)a0;
- (void)setFileNameRaw:(id)a0;
- (id)XPropertiesData;
- (id)URLWrapperForPendingFileCopy;
- (id)fileNameRaw;
- (id)localRelativePath;
- (id)securityScopedLocalURLForArchivedDataWrapper;
- (id)securityScopedLocalURLWrapper;
- (void)setLocalRelativePath:(id)a0;
- (void)setSecurityScopedLocalURLForArchivedDataWrapper:(id)a0;
- (void)setSecurityScopedLocalURLWrapper:(id)a0;
- (void)setShouldSetQuarantineAttributesOnCopiedFile:(BOOL)a0;
- (void)setURLString:(id)a0;
- (void)setURLWrapperForPendingFileCopy:(id)a0;
- (void)setXPropertiesData:(id)a0;
- (BOOL)shouldSetQuarantineAttributesOnCopiedFile;

@end

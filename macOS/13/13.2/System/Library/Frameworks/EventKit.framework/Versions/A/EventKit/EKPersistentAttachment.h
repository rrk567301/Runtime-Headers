@interface EKPersistentAttachment : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)propertyKeyForUniqueIdentifier;
+ (id)propertiesToUnloadOnCommit;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)flags;
- (id)UUID;
- (id)fileSize;
- (void)setFlags:(int)a0;
- (void)setUUID:(id)a0;
- (void)setFileSize:(id)a0;
- (id)fileFormat;
- (void)setFileFormat:(id)a0;
- (id)URLString;
- (id)externalID;
- (void)setExternalModificationTag:(id)a0;
- (id)externalModificationTag;
- (void)setExternalID:(id)a0;
- (int)entityType;
- (void)setURLString:(id)a0;
- (id)fileNameRaw;
- (void)setFileNameRaw:(id)a0;
- (id)localRelativePath;
- (void)setLocalRelativePath:(id)a0;
- (id)securityScopedLocalURLWrapper;
- (void)setSecurityScopedLocalURLWrapper:(id)a0;
- (id)securityScopedLocalURLForArchivedDataWrapper;
- (void)setSecurityScopedLocalURLForArchivedDataWrapper:(id)a0;
- (id)XPropertiesData;
- (void)setXPropertiesData:(id)a0;
- (id)securityScopedURLWrapperForPendingFileCopy;
- (void)setSecurityScopedURLWrapperForPendingFileCopy:(id)a0;
- (BOOL)shouldSetQuarantineAttributesOnCopiedFile;
- (void)setShouldSetQuarantineAttributesOnCopiedFile:(BOOL)a0;

@end

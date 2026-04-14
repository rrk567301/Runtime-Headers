@interface EKPersistentAttachment : EKPersistentObject

+ (id)propertyKeyForUniqueIdentifier;
+ (id)relations;
+ (Class)meltedClass;
+ (id)propertiesToUnloadOnCommit;

- (id)UUID;
- (id)fileSize;
- (void)setFlags:(int)a0;
- (void)setFileSize:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setUUID:(id)a0;
- (void)setExternalModificationTag:(id)a0;
- (id)externalModificationTag;
- (int)entityType;
- (id)description;
- (int)flags;
- (id)externalID;
- (id)URLString;
- (id)fileFormat;
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

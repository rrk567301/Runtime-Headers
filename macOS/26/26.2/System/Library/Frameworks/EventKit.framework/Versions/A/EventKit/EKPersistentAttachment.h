@interface EKPersistentAttachment : EKPersistentObject

+ (id)relations;
+ (id)propertyKeyForUniqueIdentifier;
+ (Class)meltedClass;
+ (id)propertiesToUnloadOnCommit;

- (id)URLString;
- (void)setFlags:(int)a0;
- (void)setFileSize:(id)a0;
- (id)fileSize;
- (int)flags;
- (id)fileFormat;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setExternalModificationTag:(id)a0;
- (int)entityType;
- (id)description;
- (id)UUID;
- (void)setUUID:(id)a0;
- (void)setExternalID:(id)a0;
- (id)externalModificationTag;
- (id)externalID;
- (void)setFileFormat:(id)a0;
- (id)XPropertiesData;
- (void)setFileNameRaw:(id)a0;
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

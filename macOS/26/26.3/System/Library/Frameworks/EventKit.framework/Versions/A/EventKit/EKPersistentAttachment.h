@interface EKPersistentAttachment : EKPersistentObject

+ (id)propertyKeyForUniqueIdentifier;
+ (id)relations;
+ (Class)meltedClass;
+ (id)propertiesToUnloadOnCommit;

- (id)URLString;
- (id)fileSize;
- (void)setFileSize:(id)a0;
- (void)setExternalModificationTag:(id)a0;
- (void)setExternalID:(id)a0;
- (id)UUID;
- (id)description;
- (void)setUUID:(id)a0;
- (id)externalID;
- (int)flags;
- (id)externalModificationTag;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)entityType;
- (void)setFlags:(int)a0;
- (id)fileFormat;
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

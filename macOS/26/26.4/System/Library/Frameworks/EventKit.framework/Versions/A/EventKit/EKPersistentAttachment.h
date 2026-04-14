@interface EKPersistentAttachment : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)propertyKeyForUniqueIdentifier;
+ (id)propertiesToUnloadOnCommit;

- (int)flags;
- (id)externalModificationTag;
- (void)setExternalID:(id)a0;
- (void)setFlags:(int)a0;
- (id)externalID;
- (int)entityType;
- (void)setExternalModificationTag:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fileSize;
- (void)setUUID:(id)a0;
- (id)URLString;
- (id)fileFormat;
- (id)description;
- (void)setFileSize:(id)a0;
- (id)UUID;
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

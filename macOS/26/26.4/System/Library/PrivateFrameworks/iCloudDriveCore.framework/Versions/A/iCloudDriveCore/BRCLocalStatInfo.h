@class NSString, NSNumber, BRFieldStructureSignature;

@interface BRCLocalStatInfo : BRCStatInfo

@property (readonly, nonatomic) BRFieldStructureSignature *versionSignature;
@property (readonly, nonatomic) unsigned long long localChangeCount;
@property (readonly, nonatomic) NSString *oldVersionIdentifier;
@property (nonatomic) unsigned char itemScope;
@property (retain, nonatomic) NSString *rawBouncedLogicalName;
@property (readonly, nonatomic) unsigned long long localChangeCount;
@property (readonly, nonatomic) NSString *oldVersionIdentifier;
@property (retain, nonatomic) NSString *fpCreationItemIdentifier;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSNumber *processingStamp;
@property (readonly, nonatomic) NSString *logicalNameWithoutLocalBounce;

+ (id)_finderTagsFromImportObject:(id)a0;
+ (char)modeFromImportObject:(id)a0 isPackageFault:(BOOL)a1;

- (void)setFilename:(id)a0;
- (void)bumpLocalChangeCount;
- (id)initWithImportObject:(id)a0 error:(id *)a1;
- (void)_markChildPropagationComplete;
- (unsigned long long)diffAgainstLocalInfo:(id)a0;
- (void)_markZombieForCrossZoneMove;
- (id)logicalName;
- (void)updateWithFileSystemFlags:(unsigned long long)a0 ignoreExecutable:(BOOL)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setItemScope:(unsigned char)a0;
- (void)_moveItemAsideWithUUIDString;
- (id)initFromResultSet:(id)a0 pos:(int)a1;
- (void)_updateStatMeta:(id)a0;
- (void)clearBouncedName;
- (void)_updateStatAliasMeta:(id)a0;
- (id)initWithLocalStatInfo:(id)a0;
- (id)initAsShareAcceptFaultWithName:(id)a0 mode:(char)a1 isDirectory:(BOOL)a2;
- (void).cxx_destruct;
- (void)_updateStatMetaFromServer:(id)a0;
- (void)updateFromImportObject:(id)a0 onlyContentDependentProperties:(BOOL)a1;
- (void)setFilename:(id)a0 forceBouncedLogicalName:(id)a1 serverName:(id)a2;
- (void)_markDead;
- (void)clearCKInfo;
- (void)_setCKInfo:(id)a0;
- (id)description;
- (id)descriptionWithContext:(id)a0 origName:(id)a1;
- (void)_markNeedsPropertiesPropagatedToChildren;
- (void)_markDeadAsSharedTopLevelItemWithDocumentsItemID:(id)a0;

@end

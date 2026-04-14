@interface BRSpecialFolders : NSObject

+ (id)_br_containerPathForDataSeparatedPersona;
+ (id)applicationSupportDirForCurrentPersona;
+ (id)cachesDirForCurrentPersona;
+ (id)homeDirForCurrentPersona;
+ (id)internalDaemonContainerPathWithError:(id *)a0;
+ (id)volumeUUIDForPersona:(id)a0;

@end

@interface SPMigration : NSObject

+ (id)createGatekeeperMigrationData:(id)a0;
+ (id)createKernelExtensionMigrationData:(id)a0;
+ (void)createMigrationPolicy:(id)a0 forTarget:(id)a1;
+ (id)gatekeeperMigrationDataPath:(id)a0;
+ (id)kernelExtensionMigrationDataPath:(id)a0;
+ (id)readKernelExtensionMigrationPolicy:(id)a0;
+ (char)volumeRequiresGatekeeperMigration:(id)a0;
+ (char)volumeRequiresKernelExtensionMigration:(id)a0;

@end

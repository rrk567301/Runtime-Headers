@class NSData, NSSet;

@interface WFTrackedFilesystemNode : WFDatabaseObjectDescriptor

@property (retain, nonatomic) NSData *bookmark;
@property (retain, nonatomic) NSSet *files;
@property (retain, nonatomic) NSSet *listeningTriggers;
@property (nonatomic) BOOL isDirectory;
@property (nonatomic) BOOL ignoringSubfolders;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 bookmark:(id)a1 fileData:(id)a2 isDirectory:(BOOL)a3 ignoringSubfolders:(BOOL)a4 triggersData:(id)a5;
- (id)initWithIdentifier:(id)a0 bookmark:(id)a1 files:(id)a2 isDirectory:(BOOL)a3 ignoringSubfolders:(BOOL)a4 triggerIdentifiers:(id)a5;

@end

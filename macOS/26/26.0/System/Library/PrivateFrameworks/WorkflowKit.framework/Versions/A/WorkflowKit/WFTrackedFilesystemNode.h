@class NSData, NSSet;

@interface WFTrackedFilesystemNode : WFDatabaseObjectDescriptor

@property (retain, nonatomic) NSData *bookmark;
@property (retain, nonatomic) NSSet *files;
@property (retain, nonatomic) NSSet *listeningTriggers;
@property (nonatomic) BOOL isDirectory;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 bookmark:(id)a1 fileData:(id)a2 isDirectory:(BOOL)a3 triggersData:(id)a4;
- (id)initWithIdentifier:(id)a0 bookmark:(id)a1 files:(id)a2 isDirectory:(BOOL)a3 triggerIdentifiers:(id)a4;

@end

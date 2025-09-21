@class NSString, NSNumber;

@interface BRCDatabaseBackupRecord : NSObject

@property (retain, nonatomic) NSString *relativePath;
@property (retain, nonatomic) NSNumber *fileID;
@property (retain, nonatomic) NSNumber *docID;
@property (nonatomic) unsigned int genCount;
@property (nonatomic) char isDirectory;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPQLResultSet:(id)a0;
- (id)initWithRelativePath:(id)a0 fileID:(id)a1 docID:(id)a2 genCount:(unsigned int)a3 isDirectory:(char)a4;

@end

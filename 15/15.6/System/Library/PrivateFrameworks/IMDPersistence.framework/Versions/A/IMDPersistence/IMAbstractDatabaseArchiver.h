@class NSString;

@interface IMAbstractDatabaseArchiver : NSObject

@property (readonly, nonatomic) NSString *sourcePath;
@property (readonly, nonatomic) NSString *destinationPath;

- (void)dealloc;
- (char)copyDatabase:(id /* block */)a0;
- (char)deleteFailedArchiveAtPath:(id)a0 error:(id *)a1;
- (id)initWithSourceDatabasePath:(id)a0 destinationDatabasePath:(id)a1;

@end

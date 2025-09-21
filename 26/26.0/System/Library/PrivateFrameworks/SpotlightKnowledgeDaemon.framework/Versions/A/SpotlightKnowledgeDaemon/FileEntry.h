@class NSString;

@interface FileEntry : NSObject

@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) unsigned long long journalNumber;
@property (nonatomic) unsigned long long fileSize;

- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0 journalNumber:(unsigned long long)a1 fileSize:(unsigned long long)a2;

@end

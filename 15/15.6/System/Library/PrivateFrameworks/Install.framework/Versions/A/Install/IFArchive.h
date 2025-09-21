@class NSString, IFFileReader;

@interface IFArchive : NSObject {
    NSString *_path;
    IFFileReader *_fileReader;
}

+ (void)initialize;
+ (id)archiveWithPath:(id)a0 withError:(id *)a1;

- (oneway void)release;
- (void)dealloc;
- (id)path;
- (id)entries;
- (id)archiveDigest;
- (id)archiveIdentity;
- (void)closeFileReader;
- (char)extractToDestination:(id)a0 withError:(id *)a1;
- (id)childEntriesForPath:(id)a0;
- (id)digestOfPath:(id)a0 withType:(id)a1;
- (id)entryForPath:(id)a0;
- (char)extractCPIOEntry:(id)a0 toDestination:(id)a1 withError:(id *)a2;
- (char)extractEntry:(id)a0 toBuffer:(id *)a1 withError:(id *)a2;
- (char)extractEntry:(id)a0 toDestination:(id)a1 withError:(id *)a2;
- (char)extractEntry:(id)a0 toFileWrapper:(id *)a1 withError:(id *)a2;
- (char)extractRawEntry:(id)a0 toBuffer:(id *)a1 withError:(id *)a2;
- (id)fileReader;
- (id)initWithPath:(id)a0 withError:(id *)a1;
- (char)verifyArchive:(id *)a0;
- (char)verifyEntry:(id)a0 withError:(id *)a1;
- (char)verifyPath:(id)a0 withError:(id *)a1;

@end

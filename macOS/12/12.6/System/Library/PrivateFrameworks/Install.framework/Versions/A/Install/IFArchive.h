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
- (BOOL)verifyPath:(id)a0 withError:(id *)a1;
- (id)archiveIdentity;
- (id)entryForPath:(id)a0;
- (BOOL)extractEntry:(id)a0 toBuffer:(id *)a1 withError:(id *)a2;
- (id)digestOfPath:(id)a0 withType:(id)a1;
- (BOOL)extractCPIOEntry:(id)a0 toDestination:(id)a1 withError:(id *)a2;
- (id)initWithPath:(id)a0 withError:(id *)a1;
- (id)fileReader;
- (BOOL)verifyEntry:(id)a0 withError:(id *)a1;
- (BOOL)extractEntry:(id)a0 toDestination:(id)a1 withError:(id *)a2;
- (BOOL)extractEntry:(id)a0 toFileWrapper:(id *)a1 withError:(id *)a2;
- (id)childEntriesForPath:(id)a0;
- (BOOL)extractRawEntry:(id)a0 toBuffer:(id *)a1 withError:(id *)a2;
- (BOOL)extractToDestination:(id)a0 withError:(id *)a1;
- (BOOL)verifyArchive:(id *)a0;
- (void)closeFileReader;

@end

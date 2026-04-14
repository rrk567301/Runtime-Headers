@class NSArray;

@interface AVTPuppetStore : NSObject

@property (copy, nonatomic) NSArray *puppetRecords;

+ (id)createPuppetRecords;

- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0;
- (id)allPuppetRecords;
- (void)loadPuppetRecordsIfNeeded;
- (id)avatarPuppetsForFetchRequest:(id)a0 error:(id *)a1;
- (id)avatarsWithIdentifiers:(id)a0 error:(id *)a1;
- (id)allAvatarPuppetsExcluding:(id)a0 error:(id *)a1;
- (id)allAvatarPuppetsWithError:(id *)a0;

@end

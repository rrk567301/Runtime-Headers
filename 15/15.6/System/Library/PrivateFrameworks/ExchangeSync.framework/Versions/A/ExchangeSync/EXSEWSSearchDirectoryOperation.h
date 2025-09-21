@class NSArray, NSString;

@interface EXSEWSSearchDirectoryOperation : EXSEWSOperation

@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSString *searchQuery;
@property (nonatomic) char includeFullContactData;

+ (id)log;

- (void).cxx_destruct;
- (char)executeWithChangeItem:(id)a0 error:(id *)a1;

@end

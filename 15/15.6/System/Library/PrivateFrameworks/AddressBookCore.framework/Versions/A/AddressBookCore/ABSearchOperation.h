@class PHXSource, NSArray, NSString, ABAddressBook;
@protocol ABCNDirectoryResultBuilder, ABSearchOperationDelegate;

@interface ABSearchOperation : NSOperation

@property (retain) id<ABCNDirectoryResultBuilder> resultBuilderPrototype;
@property (retain, nonatomic) PHXSource *source;
@property (copy, nonatomic) NSArray *terms;
@property (copy, nonatomic) NSString *originalTerm;
@property (retain, nonatomic) id<ABSearchOperationDelegate> delegate;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) ABAddressBook *addressBook;
@property (nonatomic) int phase;
@property (nonatomic) char shouldSearchLocal;
@property (nonatomic) char shouldSearchServer;
@property (nonatomic) char shouldReturnDistributionLists;
@property (nonatomic) char shouldReturnFullContactData;
@property (nonatomic) int resultType;
@property (retain, nonatomic) NSArray *prefixFields;

+ (char)_resultRecord:(id)a0 matchesSearchOperation:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)main;
- (void)_doMain;
- (id)cachedMatches;
- (void)reportRecords:(id)a0;
- (id)searchMatches;

@end

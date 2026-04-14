@class NSDate;

@interface SSJournalResultBuilder : SSResultBuilder

@property (retain) NSDate *dateCreated;

+ (BOOL)isCoreSpotlightResult;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildFootnote;

@end

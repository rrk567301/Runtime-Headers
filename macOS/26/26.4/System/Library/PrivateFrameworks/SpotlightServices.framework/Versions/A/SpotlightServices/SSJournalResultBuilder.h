@class NSDate;

@interface SSJournalResultBuilder : SSResultBuilder

@property (retain) NSDate *dateCreated;

+ (BOOL)isCoreSpotlightResult;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildFootnote;

@end

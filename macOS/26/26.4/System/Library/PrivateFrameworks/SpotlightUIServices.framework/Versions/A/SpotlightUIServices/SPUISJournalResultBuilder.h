@class NSDate;

@interface SPUISJournalResultBuilder : SPUISResultBuilder

@property (retain) NSDate *dateCreated;

+ (id)bundleId;
+ (BOOL)isCoreSpotlightResult;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildFootnote;

@end

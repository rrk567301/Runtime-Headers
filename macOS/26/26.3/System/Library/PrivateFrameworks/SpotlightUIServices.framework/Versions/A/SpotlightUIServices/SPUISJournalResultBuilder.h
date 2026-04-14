@class NSDate;

@interface SPUISJournalResultBuilder : SPUISResultBuilder

@property (retain) NSDate *dateCreated;

+ (id)bundleId;
+ (BOOL)isCoreSpotlightResult;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildFootnote;

@end

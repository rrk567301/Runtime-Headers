@class WDDocument, NSMutableDictionary;

@interface WDCitationTable : NSObject {
    NSMutableDictionary *mCitations;
}

@property (readonly, weak) WDDocument *document;

- (unsigned long long)count;
- (id)description;
- (id)initWithDocument:(id)a0;
- (void).cxx_destruct;
- (void)addCitation:(id)a0 forID:(id)a1;
- (id)citationFor:(id)a0;
- (id)citationIDs;

@end

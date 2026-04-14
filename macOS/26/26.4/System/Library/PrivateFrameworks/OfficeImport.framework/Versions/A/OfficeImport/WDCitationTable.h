@class WDDocument, NSMutableDictionary;

@interface WDCitationTable : NSObject {
    NSMutableDictionary *mCitations;
}

@property (readonly, weak) WDDocument *document;

- (void).cxx_destruct;
- (id)initWithDocument:(id)a0;
- (unsigned long long)count;
- (id)description;
- (void)addCitation:(id)a0 forID:(id)a1;
- (id)citationFor:(id)a0;
- (id)citationIDs;

@end

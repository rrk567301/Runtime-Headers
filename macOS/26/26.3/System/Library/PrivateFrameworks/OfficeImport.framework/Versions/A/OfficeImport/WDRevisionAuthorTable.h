@class WDDocument, NSMutableArray;

@interface WDRevisionAuthorTable : NSObject {
    NSMutableArray *mAuthors;
    WDDocument *mDocument;
}

- (id)description;
- (id)authors;
- (id)initWithDocument:(id)a0;
- (void).cxx_destruct;
- (void)addAuthor:(id)a0;
- (unsigned long long)authorAddLookup:(id)a0;
- (id)authorAt:(unsigned long long)a0;
- (unsigned long long)authorCount;

@end

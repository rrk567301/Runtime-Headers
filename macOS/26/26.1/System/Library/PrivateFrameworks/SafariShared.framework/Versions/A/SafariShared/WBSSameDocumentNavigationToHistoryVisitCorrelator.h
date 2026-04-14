@class NSMutableArray;

@interface WBSSameDocumentNavigationToHistoryVisitCorrelator : NSObject {
    NSMutableArray *_visits;
}

- (void).cxx_destruct;
- (id)init;
- (void)noteVisit:(id)a0;
- (id)visitForSameDocumentNavigationToURL:(id)a0;

@end

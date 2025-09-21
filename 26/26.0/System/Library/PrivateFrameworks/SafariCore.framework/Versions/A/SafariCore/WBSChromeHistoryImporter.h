@class NSString, NSURL, NSError, NSMutableArray;
@protocol WBSHistoryImporterDelegate;

@interface WBSChromeHistoryImporter : NSObject <WBSJSONReaderDelegate> {
    NSError *_lastError;
    NSMutableArray *_stack;
    BOOL _foundVisitArray;
    NSURL *_url;
    NSString *_title;
    long long _visitTime;
}

@property (weak, nonatomic) id<WBSHistoryImporterDelegate> delegate;
@property (nonatomic) double ageLimit;

- (void).cxx_destruct;
- (BOOL)_isParsingVisit;
- (BOOL)parseURL:(id)a0 error:(id *)a1;
- (BOOL)_checkNotAtRootLevel;
- (BOOL)_isParsingVisitArray;
- (id)_popKeyFromStackIfPossible;
- (BOOL)jsonReader:(id)a0 appendKey:(id)a1;
- (BOOL)jsonReader:(id)a0 error:(id)a1;
- (BOOL)jsonReader:(id)a0 scalarValue:(id)a1;
- (BOOL)jsonReaderBeginArray:(id)a0;
- (BOOL)jsonReaderBeginObject:(id)a0;
- (BOOL)jsonReaderEndArray:(id)a0;
- (BOOL)jsonReaderEndObject:(id)a0;
- (BOOL)parseFileHandle:(id)a0 error:(id *)a1;

@end

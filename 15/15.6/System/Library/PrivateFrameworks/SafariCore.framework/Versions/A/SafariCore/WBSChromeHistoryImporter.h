@class NSString, NSURL, NSError, NSMutableArray;
@protocol WBSHistoryImporterDelegate;

@interface WBSChromeHistoryImporter : NSObject <WBSJSONReaderDelegate> {
    NSError *_lastError;
    NSMutableArray *_stack;
    char _foundVisitArray;
    NSURL *_url;
    NSString *_title;
    long long _visitTime;
}

@property (weak, nonatomic) id<WBSHistoryImporterDelegate> delegate;
@property (nonatomic) double ageLimit;

- (void).cxx_destruct;
- (char)parseURL:(id)a0 error:(id *)a1;
- (char)_isParsingVisit;
- (char)_checkNotAtRootLevel;
- (char)_isParsingVisitArray;
- (id)_popKeyFromStackIfPossible;
- (char)jsonReader:(id)a0 appendKey:(id)a1;
- (char)jsonReader:(id)a0 error:(id)a1;
- (char)jsonReader:(id)a0 scalarValue:(id)a1;
- (char)jsonReaderBeginArray:(id)a0;
- (char)jsonReaderBeginObject:(id)a0;
- (char)jsonReaderEndArray:(id)a0;
- (char)jsonReaderEndObject:(id)a0;
- (char)parseFileHandle:(id)a0 error:(id *)a1;

@end

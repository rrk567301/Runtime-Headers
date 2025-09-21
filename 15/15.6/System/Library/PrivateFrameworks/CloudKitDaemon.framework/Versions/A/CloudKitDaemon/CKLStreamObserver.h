@class CKLEventFilter, NSDateFormatter, NSMutableDictionary, NSString;

@interface CKLStreamObserver : NSObject

@property (retain, nonatomic) CKLEventFilter *filter;
@property (readonly, nonatomic) NSDateFormatter *formatter;
@property (retain, nonatomic) NSMutableDictionary *processNamesByPath;
@property (nonatomic) char simulatorOnly;
@property (nonatomic) char onlyTestLogs;
@property (nonatomic) char colorOutput;
@property (retain, nonatomic) NSString *processName;

- (void).cxx_destruct;
- (void)finish;
- (void)_handleEvent:(id)a0;
- (id)_processNameForPath:(id)a0;
- (void)eventMatched:(id)a0;
- (id)initWithLogTypes:(unsigned long long)a0;

@end

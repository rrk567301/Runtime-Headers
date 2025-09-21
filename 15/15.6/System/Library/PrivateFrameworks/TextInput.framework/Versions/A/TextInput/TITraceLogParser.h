@protocol TITraceLogParsingDelegate;

@interface TITraceLogParser : NSObject

@property (nonatomic) unsigned long long version;
@property (weak, nonatomic) id<TITraceLogParsingDelegate> delegate;

- (void).cxx_destruct;
- (void)parseTraceLogHeaderWithScanner:(id)a0;
- (id)convertStringToContext:(id)a0;
- (id)extractBeamSearchContextStringFromLogText:(id)a0;
- (char)parseIntegerHeader:(id)a0 headerValue:(long long *)a1 withScanner:(id)a2;
- (char)parseStringHeader:(id)a0 headerValue:(id *)a1 withScanner:(id)a2;
- (void)parseTraceLogContent:(id)a0;
- (id)parseTraceLogContextFromLogText:(id)a0 andPriorContext:(id)a1;
- (id)parseTraceRecordWithScanner:(id)a0 andPriorContext:(id)a1;
- (void)parseTraceRecordsWithScanner:(id)a0;

@end

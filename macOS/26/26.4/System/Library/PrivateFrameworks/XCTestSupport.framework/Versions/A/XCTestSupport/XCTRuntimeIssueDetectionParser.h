@interface XCTRuntimeIssueDetectionParser : NSObject

+ (id)osFaultRuntimeIssueWithMessage:(id)a0 format:(id)a1 fallbackBacktrace:(id)a2 needsOutOfProcessSymbolication:(BOOL)a3;
+ (void)scanMessage:(id)a0 withFormat:(id)a1 intoMessageString:(id *)a2 intoImageOffsetString:(id *)a3;
+ (id)hexStringToData:(id)a0 separator:(id)a1;
+ (id)messageFromJSONString:(id)a0;
+ (id)runtimeIssueFromDelegateIdentifierPrefix:(id)a0 backtrace:(id)a1;
+ (id)uuidsAndOffsetsFromSerializedString:(id)a0;

@end

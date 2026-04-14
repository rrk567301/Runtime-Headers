@class NSString;

@interface _OnDeviceSummarization : NSObject {
    void /* unknown type, empty encoding */ summary;
}

@property (class, nonatomic) BOOL isRestricted;

@property (nonatomic, copy) NSString *summary;
@property (nonatomic) void /* unknown type, empty encoding */ isSafe;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

+ (void)checkSummarizationAvailabilityWithCompletionHandler:(void (^)(BOOL))a0;

- (id)init;
- (void).cxx_destruct;
- (void)requestSummaryForString:(id)a0;

@end

@class NSString;

@interface OnDeviceSummarization : NSObject {
    void /* function */ summary;
}

@property (class, nonatomic) BOOL isRestricted;

@property (nonatomic, copy) NSString *summary;
@property (nonatomic) BOOL isSafe;
@property (nonatomic, weak) void /* function */ delegate;

+ (BOOL)isSummarizationAvailabileForLanguageCode:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)requestSummaryForString:(id)a0;

@end

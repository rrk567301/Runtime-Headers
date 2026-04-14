@class NSString;

@interface OnDeviceSummarization : NSObject {
    void /* function */ summary;
}

@property (class, nonatomic) BOOL isRestricted;

@property (nonatomic, copy) NSString *summary;
@property (nonatomic) BOOL isSafe;
@property (nonatomic, weak) void /* function */ delegate;

+ (BOOL)isSummarizationAvailabileForLanguageCode:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)requestSummaryForString:(id)a0;

@end

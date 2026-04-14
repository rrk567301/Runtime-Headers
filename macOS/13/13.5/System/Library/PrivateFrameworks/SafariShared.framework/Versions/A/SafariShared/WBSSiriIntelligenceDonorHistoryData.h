@class NSURL, NSString, NSDate;

@interface WBSSiriIntelligenceDonorHistoryData : NSObject

@property (copy, nonatomic) NSURL *pageURL;
@property (copy, nonatomic) NSString *userVisibleURLString;
@property (copy, nonatomic) NSString *pageTitle;
@property (copy, nonatomic) NSString *fullPageText;
@property (copy, nonatomic) NSString *readerText;
@property (copy, nonatomic) NSDate *lastVisitedDate;
@property (nonatomic) unsigned long long visitCount;

- (void).cxx_destruct;

@end

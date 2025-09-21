@class NSString, NSImage, NSData, NSURL, NSURLResponse, NSError;

@interface WBSTouchIconFetchOperationResult : NSObject

@property (readonly, nonatomic) NSImage *touchIcon;
@property (readonly, nonatomic) NSData *iconData;
@property (readonly, nonatomic) NSURL *iconURL;
@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, nonatomic, getter=isFavicon) char favicon;
@property (readonly, nonatomic) char pageRequestDidSucceed;
@property (readonly, nonatomic) char higherPriorityIconDownloadFailedDueToNetworkError;
@property (readonly, nonatomic) char failedDueToUnrecoverableNetworkError;
@property (readonly, nonatomic) NSURLResponse *response;
@property (readonly, nonatomic) NSError *error;

+ (id)resultWithTouchIcon:(id)a0 host:(id)a1 isFavicon:(char)a2 pageRequestDidSucceed:(char)a3 response:(id)a4 higherPriorityIconDownloadFailedDueToNetworkError:(char)a5;
+ (id)resultForFetchFailureWithHost:(id)a0 pageRequestDidSucceed:(char)a1 response:(id)a2 error:(id)a3;
+ (id)resultWithFavicon:(id)a0 iconData:(id)a1 iconURL:(id)a2 host:(id)a3 pageRequestDidSucceed:(char)a4 response:(id)a5 higherPriorityIconDownloadFailedDueToNetworkError:(char)a6;

- (void).cxx_destruct;
- (id)initWithTouchIcon:(id)a0 iconData:(id)a1 iconURL:(id)a2 host:(id)a3 isFavicon:(char)a4 pageRequestDidSucceed:(char)a5 response:(id)a6 higherPriorityIconDownloadFailedDueToNetworkError:(char)a7 error:(id)a8;

@end

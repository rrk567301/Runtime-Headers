@class NSString, NSArray, NSDate, AVAssetResourceLoadingContentInformationRequestInternal;

@interface AVAssetResourceLoadingContentInformationRequest : NSObject {
    AVAssetResourceLoadingContentInformationRequestInternal *_contentInformationRequest;
}

@property (copy, nonatomic) NSString *contentType;
@property (readonly, nonatomic) NSArray *allowedContentTypes;
@property (nonatomic) long long contentLength;
@property (nonatomic, getter=isByteRangeAccessSupported) BOOL byteRangeAccessSupported;
@property (copy, nonatomic) NSDate *renewalDate;
@property (nonatomic, getter=isEntireLengthAvailableOnDemand) BOOL entireLengthAvailableOnDemand;

- (id)initWithLoadingRequest:(id)a0 allowedContentTypes:(id)a1;
- (BOOL)isDiskCachingPermitted;
- (id)init;
- (id)description;
- (void)setDiskCachingPermitted:(BOOL)a0;
- (void)dealloc;
- (id)propertyList;

@end

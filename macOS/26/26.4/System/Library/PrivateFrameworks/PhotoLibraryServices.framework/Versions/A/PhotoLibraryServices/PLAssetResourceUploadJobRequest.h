@class NSData, PLAssetResourceUploadJob;

@interface PLAssetResourceUploadJobRequest : PLManagedObject

@property (retain, nonatomic) NSData *responseHeaderData;
@property (retain, nonatomic) NSData *resumeData;
@property (retain, nonatomic) NSData *urlRequestData;
@property (retain, nonatomic) PLAssetResourceUploadJob *job;

+ (id)entityName;
+ (id)_stringHeadersFromHTTPResponse:(id)a0;
+ (id)dataForHTTPURLResponse:(id)a0;
+ (id)dataForURLRequest:(id)a0;
+ (id)responseHeaderFieldsForData:(id)a0;
+ (id)urlRequestForData:(id)a0;

- (void)clearIfNeeded;

@end

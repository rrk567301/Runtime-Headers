@class NSData, PLAssetResourceUploadJob;

@interface PLAssetResourceUploadJobRequest : PLManagedObject

@property (retain, nonatomic) NSData *urlRequestData;
@property (retain, nonatomic) PLAssetResourceUploadJob *job;

+ (id)entityName;
+ (id)dataForURLRequest:(id)a0;
+ (id)urlRequestForData:(id)a0;

@end

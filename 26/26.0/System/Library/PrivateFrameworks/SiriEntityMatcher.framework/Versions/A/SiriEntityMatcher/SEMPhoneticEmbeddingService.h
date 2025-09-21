@class NSString, SEMPhoneticEmbedder, NSObject;
@protocol OS_dispatch_queue;

@interface SEMPhoneticEmbeddingService : NSObject <SEMEmbeddingService> {
    SEMPhoneticEmbedder *_graphemeInputEmbedder;
    SEMPhoneticEmbedder *_phonemeInputEmbedder;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (char)embeddingDataType;

- (id)initWithLocale:(id)a0;
- (id)modelVersion;
- (void).cxx_destruct;
- (long long)embeddingDimension;
- (id)embeddingForRequest:(id)a0 error:(id *)a1;
- (id)embeddingForRequests:(id)a0 error:(id *)a1;

@end

@class NSOperationQueue, MPStoreLibraryPersonalizationRequest;

@interface MPStoreLibraryPersonalizationRequestOperation : MPAsyncOperation {
    NSOperationQueue *_operationQueue;
}

@property (copy, nonatomic) MPStoreLibraryPersonalizationRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

+ (id)personalizedResponseForContentDescriptor:(id)a0 requestedProperties:(id)a1;
+ (id)personalizedResponseForContentDescriptor:(id)a0 requestedProperties:(id)a1 matchAlbumArtistOnStoreIdAndName:(BOOL)a2;

- (void)execute;
- (void)cancel;
- (void).cxx_destruct;

@end

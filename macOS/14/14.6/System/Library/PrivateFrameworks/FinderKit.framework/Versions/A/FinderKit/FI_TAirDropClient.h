@class NSString, NSImage, NSArray, NSData, NSError;
@protocol OS_nw_endpoint, TAirDropTransfer;

@interface FI_TAirDropClient : NSObject {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ monitor;
}

+ (id)sharedClient;
+ (BOOL)isClassroomEndpoint:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)stopListening;
- (void)startListening:(id /* block */)a0;
- (void)classroomImageForEndpointIdentifier:(NSString *)a0 completionHandler:(void (^)(NSImage *))a1;
- (void)sendURLs:(NSArray *)a0 endpoint:(id<OS_nw_endpoint>)a1 itemPreviewData:(NSData *)a2 requestSource:(NSString *)a3 completion:(void (^)(id<TAirDropTransfer>, NSError *))a4;

@end

@class NSString;
@protocol FSFFeatureStoreStream;

@interface FSFCurareInteractionFeatureStoreStream : NSObject <FSFStreamSourceProtocol> {
    id<FSFFeatureStoreStream> _biomeStream;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)createError:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithStreamId:(id)a0;
- (char)insert:(id)a0 error:(id *)a1;
- (id)retrieveWithInteractionWrapper:(id)a0;
- (char)deleteCurrentStream;
- (id)retrieve:(id)a0;
- (void)retrieve:(id)a0 completionHandler:(id /* block */)a1;
- (void)retrieveWithInteractionWrapper:(id)a0 completionHandler:(id /* block */)a1;

@end

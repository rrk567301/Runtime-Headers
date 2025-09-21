@class NSError, NSData, CPLResource;

@interface CPLProxyLibraryManagerOutstandingInvocation : NSObject

@property (nonatomic, getter=isInMemoryRequest) char inMemoryRequest;
@property (nonatomic) char didStart;
@property (nonatomic) float progress;
@property (nonatomic) char didFinish;
@property (retain, nonatomic) NSError *finalError;
@property (retain, nonatomic) CPLResource *finalResource;
@property (retain, nonatomic) NSData *finalData;

- (id)description;
- (void).cxx_destruct;

@end

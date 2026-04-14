@class NSString, NSURLResponse, NSURL, NSURLRequest;

@interface WKNavigationData : NSObject <WKObject> {
    struct AlignedStorage<API::NavigationData, 8UL> { struct Storage { unsigned char data[488]; } m_storage; } _data;
}

@property (readonly) NSString *title;
@property (readonly) NSURLRequest *originalRequest;
@property (readonly) NSURL *destinationURL;
@property (readonly) NSURLResponse *response;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end

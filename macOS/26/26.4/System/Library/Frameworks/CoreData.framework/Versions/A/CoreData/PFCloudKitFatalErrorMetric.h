@class NSString;

@interface PFCloudKitFatalErrorMetric : PFCloudKitUnhandledPartialErrorMetric {
    NSString *_requestClass;
}

- (id)createPayload;
- (id)name;
- (id)initWithContainerIdentifier:(id)a0 result:(id)a1;
- (void)dealloc;

@end

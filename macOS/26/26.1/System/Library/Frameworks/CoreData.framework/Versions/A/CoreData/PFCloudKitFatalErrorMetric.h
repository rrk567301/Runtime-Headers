@class NSString;

@interface PFCloudKitFatalErrorMetric : PFCloudKitUnhandledPartialErrorMetric {
    NSString *_requestClass;
}

- (id)createPayload;
- (id)initWithContainerIdentifier:(id)a0 result:(id)a1;
- (void)dealloc;
- (id)name;

@end

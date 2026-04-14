@class NSString;

@interface PFCloudKitFatalErrorMetric : PFCloudKitUnhandledPartialErrorMetric {
    NSString *_requestClass;
}

- (void)dealloc;
- (id)createPayload;
- (id)name;
- (id)initWithContainerIdentifier:(id)a0 result:(id)a1;

@end

@class NSString;

@interface PFCloudKitFatalErrorMetric : PFCloudKitUnhandledPartialErrorMetric {
    NSString *_requestClass;
}

- (id)initWithContainerIdentifier:(id)a0 result:(id)a1;
- (id)name;
- (id)createPayload;
- (void)dealloc;

@end

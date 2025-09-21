@class NSNumber, NSString;

@interface PFCloudKitUnhandledPartialErrorMetric : PFCloudKitBaseMetric {
    NSNumber *_errorCode;
    NSString *_errorDomain;
}

- (void)dealloc;
- (id)initWithContainerIdentifier:(id)a0 error:(id)a1;
- (id)createPayload;
- (id)name;

@end

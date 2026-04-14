@class NSNumber, NSString;

@interface PFCloudKitUnhandledPartialErrorMetric : PFCloudKitBaseMetric {
    NSNumber *_errorCode;
    NSString *_errorDomain;
}

- (id)createPayload;
- (id)initWithContainerIdentifier:(id)a0 error:(id)a1;
- (void)dealloc;
- (id)name;

@end

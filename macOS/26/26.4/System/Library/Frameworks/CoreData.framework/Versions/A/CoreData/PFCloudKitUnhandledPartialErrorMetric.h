@class NSNumber, NSString;

@interface PFCloudKitUnhandledPartialErrorMetric : PFCloudKitBaseMetric {
    NSNumber *_errorCode;
    NSString *_errorDomain;
}

- (id)createPayload;
- (id)name;
- (id)initWithContainerIdentifier:(id)a0 error:(id)a1;
- (void)dealloc;

@end

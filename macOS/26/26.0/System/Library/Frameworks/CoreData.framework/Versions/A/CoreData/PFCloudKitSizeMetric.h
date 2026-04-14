@class NSNumber;

@interface PFCloudKitSizeMetric : PFCloudKitBaseMetric {
    NSNumber *_sizeInBytes;
}

- (void)dealloc;
- (id)initWithContainerIdentifier:(id)a0;
- (id)createPayload;

@end

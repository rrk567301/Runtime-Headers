@class NSNumber;

@interface PFCloudKitSizeMetric : PFCloudKitBaseMetric {
    NSNumber *_sizeInBytes;
}

- (id)createPayload;
- (void)dealloc;
- (id)initWithContainerIdentifier:(id)a0;

@end

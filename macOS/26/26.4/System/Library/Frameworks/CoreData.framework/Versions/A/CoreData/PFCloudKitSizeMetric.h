@class NSNumber;

@interface PFCloudKitSizeMetric : PFCloudKitBaseMetric {
    NSNumber *_sizeInBytes;
}

- (id)createPayload;
- (id)initWithContainerIdentifier:(id)a0;
- (void)dealloc;

@end

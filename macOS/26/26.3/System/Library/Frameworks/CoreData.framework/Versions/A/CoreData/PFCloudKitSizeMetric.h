@class NSNumber;

@interface PFCloudKitSizeMetric : PFCloudKitBaseMetric {
    NSNumber *_sizeInBytes;
}

- (id)initWithContainerIdentifier:(id)a0;
- (id)createPayload;
- (void)dealloc;

@end

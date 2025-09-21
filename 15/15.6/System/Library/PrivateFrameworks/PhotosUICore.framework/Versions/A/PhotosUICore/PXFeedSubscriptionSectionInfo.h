@interface PXFeedSubscriptionSectionInfo : PXFeedAssetsSectionInfo

- (long long)sectionType;
- (char)isMine;
- (void)updateFromCloudFeedEntry;

@end

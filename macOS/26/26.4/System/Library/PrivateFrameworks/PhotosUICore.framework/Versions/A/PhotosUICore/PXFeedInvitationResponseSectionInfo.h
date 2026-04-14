@interface PXFeedInvitationResponseSectionInfo : PXFeedSectionInfo

- (long long)sectionType;
- (id)assets;
- (long long)typeForItemAtIndex:(long long)a0;
- (void)updateFromCloudFeedEntry;

@end

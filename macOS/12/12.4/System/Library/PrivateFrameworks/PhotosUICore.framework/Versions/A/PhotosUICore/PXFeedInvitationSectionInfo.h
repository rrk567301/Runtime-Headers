@interface PXFeedInvitationSectionInfo : PXFeedSectionInfo

- (long long)sectionType;
- (void)updateFromCloudFeedEntry;
- (long long)typeForItemAtIndex:(long long)a0;

@end

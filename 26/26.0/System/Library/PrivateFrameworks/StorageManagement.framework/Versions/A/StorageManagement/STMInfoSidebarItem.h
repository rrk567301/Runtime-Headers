@class NSString, STMSummaryDetails, STMFilesConfiguration, NSNumber;
@protocol STMInfoStorageUsageReporting;

@interface STMInfoSidebarItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *extensionIdentifier;
@property (retain) id<STMInfoStorageUsageReporting> representedObject;
@property (copy) NSString *alternateIdentifier;
@property (copy) NSString *localizedTitle;
@property (retain) NSNumber *size;
@property (retain) STMSummaryDetails *summaryDetails;
@property (retain) STMFilesConfiguration *filesConfiguration;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

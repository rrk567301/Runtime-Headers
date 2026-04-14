@class NSDictionary, SFShareSheetSessionTestingDataDump, NSNumber, SFCollaborationCloudSharingRequest;

@interface SFShareSheetSessionConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *matchingRules;
@property (nonatomic) BOOL onlyActionExtensions;
@property (nonatomic) BOOL allowDisabledExtensions;
@property (nonatomic) BOOL isCollaborative;
@property (retain, nonatomic) NSNumber *collaborationType;
@property (retain, nonatomic) NSNumber *collaborationIsPostShare;
@property (retain, nonatomic) SFCollaborationCloudSharingRequest *collaborationCloudSharingRequest;
@property (retain, nonatomic) SFShareSheetSessionTestingDataDump *testingReferenceDataDump;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;

@end

@class SFCollaborationCloudSharingRequest;

@interface SFShareSheetSessionConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SFCollaborationCloudSharingRequest *collaborationCloudSharingRequest;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

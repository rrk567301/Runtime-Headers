@class NSArray, SFCollaborationCloudSharingResult;

@interface SFShareSheetSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *peopleSuggestionProxies;
@property (retain, nonatomic) SFCollaborationCloudSharingResult *collaborationCloudSharingResult;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPeopleSuggestionProxies:(id)a0;

@end

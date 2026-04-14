@class NSArray, SFCollaborationCloudSharingResult;

@interface SFShareSheetSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *collaborativePeopleSuggestionProxies;
@property (readonly, copy, nonatomic) NSArray *nonCollaborativePeopleSuggestionProxies;
@property (readonly, copy, nonatomic) NSArray *discoveredActivities;
@property (retain, nonatomic) SFCollaborationCloudSharingResult *collaborationCloudSharingResult;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCollaborativePeopleSuggestionProxies:(id)a0 nonCollaborativePeopleSuggestionProxies:(id)a1;
- (id)initWithDiscoveredActivities:(id)a0;

@end

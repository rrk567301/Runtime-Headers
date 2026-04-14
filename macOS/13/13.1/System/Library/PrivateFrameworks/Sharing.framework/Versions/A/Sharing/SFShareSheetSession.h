@class NSArray, SFCollaborationCloudSharingResult;

@interface SFShareSheetSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *collaborativePeopleSuggestionProxies;
@property (readonly, copy, nonatomic) NSArray *nonCollaborativePeopleSuggestionProxies;
@property (retain, nonatomic) SFCollaborationCloudSharingResult *collaborationCloudSharingResult;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCollaborativePeopleSuggestionProxies:(id)a0 nonCollaborativePeopleSuggestionProxies:(id)a1;
- (id)initWithPeopleSuggestionProxies:(id)a0;

@end

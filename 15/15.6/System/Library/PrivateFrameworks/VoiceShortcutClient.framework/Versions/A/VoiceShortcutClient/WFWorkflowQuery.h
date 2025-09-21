@class NSString;

@interface WFWorkflowQuery : WFResultQuery <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long location;
@property (readonly, nonatomic) NSString *workflowType;
@property (readonly, nonatomic) NSString *folderIdentifier;
@property (nonatomic) long long resultsLimit;
@property (nonatomic) char includeTombstonesAndConflicts;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocation:(unsigned long long)a0;
- (id)initWithCollectionIdentifier:(id)a0;
- (id)initWithFolderIdentifier:(id)a0;
- (id)initWithWorkflowType:(id)a0;

@end

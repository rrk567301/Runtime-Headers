@class CKServerChangeToken, CKOperationGroup, NSDate;

@interface BRCContainerMetadataSyncPersistedState : BRCPersistedState

@property (readonly, nonatomic) NSDate *lastSyncDownDate;
@property (readonly, nonatomic) CKServerChangeToken *serverChangeToken;
@property (nonatomic) BOOL needsContainerMetadataSyncDown;
@property (nonatomic) BOOL needsSharedDBSyncDown;
@property (nonatomic) BOOL hasCaughtUpAtLeastOnce;
@property (readonly, nonatomic) unsigned long long requestID;
@property (retain, nonatomic) CKOperationGroup *ckGroup;

+ (BOOL)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)a0 options:(id)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)containerMetadataWasReset;
- (unsigned long long)allocateNextRequestID;
- (void).cxx_destruct;
- (id)description;
- (void)updateWithServerChangeToken:(id)a0 requestID:(unsigned long long)a1;
- (id)init;

@end

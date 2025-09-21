@class CKServerChangeToken, CKOperationGroup, NSDate;

@interface BRCContainerMetadataSyncPersistedState : BRCPersistedState

@property (readonly, nonatomic) NSDate *lastSyncDownDate;
@property (readonly, nonatomic) CKServerChangeToken *serverChangeToken;
@property (nonatomic) char needsContainerMetadataSyncDown;
@property (nonatomic) char needsSharedDBSyncDown;
@property (nonatomic) char hasCaughtUpAtLeastOnce;
@property (readonly, nonatomic) unsigned long long requestID;
@property (retain, nonatomic) CKOperationGroup *ckGroup;

+ (char)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)a0 options:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)allocateNextRequestID;
- (void)containerMetadataWasReset;
- (void)updateWithServerChangeToken:(id)a0 requestID:(unsigned long long)a1;

@end

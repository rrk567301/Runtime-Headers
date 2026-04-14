@class CKServerChangeToken, CKOperationGroup, NSDate;

@interface BRCSideCarSyncPersistedState : BRCPersistedState

@property (readonly) NSDate *lastSyncDownDate;
@property (readonly, nonatomic) CKServerChangeToken *serverChangeToken;
@property (readonly, nonatomic) unsigned long long requestID;
@property (nonatomic) BOOL needsSync;
@property (retain, nonatomic) CKOperationGroup *ckGroup;

+ (BOOL)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)a0 options:(id)a1;

- (void)sideCarZoneWasReset;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithZoneHealthState:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateWithServerChangeToken:(id)a0 requestID:(unsigned long long)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)allocateNextRequestID;
- (void).cxx_destruct;

@end

@class NSImage, PKPaymentCredential, NSString;

@interface PKPaymentSetupCredentialListItem : PKPaymentSetupListItem <PKPassSnapshotCoordinatableSource, NSCopying>

@property (readonly, nonatomic) PKPaymentCredential *credential;
@property (nonatomic) unsigned long long lastCheckedCredentialHash;
@property (retain, nonatomic) NSImage *passSnapshot;
@property (nonatomic) char isAvailable;
@property (nonatomic) char isUnavailable;
@property (nonatomic) char isRefund;
@property (nonatomic) char isBeingProvisioned;
@property (nonatomic) char isCellDisabled;
@property (nonatomic) char isSnapshotFetchInProgress;
@property (readonly, nonatomic) char isDeletable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCredential:(id)a0;

@end

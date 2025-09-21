@interface AppTelemetryStuckStatus : PBCodable <NSCopying> {
    struct { unsigned char itemPendingReconciliationJobBlockingCode : 1; unsigned char itemPendingReconciliationJobCode : 1; unsigned char itemPendingReconciliationJobSchedulingState : 1; unsigned char itemPendingScanningDiskEnumerationStatus : 1; unsigned char itemPendingScanningDiskNumberOfChildrenNotPendingReconciliation : 1; unsigned char itemPendingScanningDiskNumberOfChildrenPendingReconciliation : 1; unsigned char itemPendingScanningDiskNumberOfChildrenPendingRejection : 1; unsigned char itemPendingScanningDiskNumberOfChildrenPendingSyncDown : 1; unsigned char itemPendingScanningDiskNumberOfChildrenPendingSyncDownDeletion : 1; unsigned char itemPendingScanningDiskNumberOfChildrenPendingSyncDownReparent : 1; unsigned char itemPendingScanningDiskNumberOfChildrenPendingSyncUp : 1; unsigned char itemPendingScanningDiskNumberOfChildrenPendingSyncUpDeletion : 1; unsigned char itemPendingScanningDiskNumberOfChildrenPendingSyncUpReparent : 1; unsigned char itemPendingScanningProviderEnumerationStatus : 1; unsigned char itemPendingScanningProviderNumberOfChildren : 1; unsigned char itemPendingScanningProviderNumberOfChildrenFailingCreation : 1; unsigned char itemPendingScanningProviderNumberOfChildrenPendingCreation : 1; unsigned char itemPendingScanningProviderRemovalOfDatalessBitStatus : 1; unsigned char itemPendingReconciliationIsLocked : 1; unsigned char itemPendingReconciliationIsLockedInDB : 1; unsigned char itemPendingScanningDiskHasMultiplePagesEnumeration : 1; unsigned char itemPendingScanningProviderHasMultiplePagesEnumeration : 1; } _has;
}

@property (nonatomic) char hasItemPendingReconciliationIsLocked;
@property (nonatomic) char itemPendingReconciliationIsLocked;
@property (nonatomic) char hasItemPendingReconciliationIsLockedInDB;
@property (nonatomic) char itemPendingReconciliationIsLockedInDB;
@property (nonatomic) char hasItemPendingReconciliationJobCode;
@property (nonatomic) long long itemPendingReconciliationJobCode;
@property (nonatomic) char hasItemPendingReconciliationJobSchedulingState;
@property (nonatomic) long long itemPendingReconciliationJobSchedulingState;
@property (nonatomic) char hasItemPendingReconciliationJobBlockingCode;
@property (nonatomic) long long itemPendingReconciliationJobBlockingCode;
@property (nonatomic) char hasItemPendingScanningDiskEnumerationStatus;
@property (nonatomic) long long itemPendingScanningDiskEnumerationStatus;
@property (nonatomic) char hasItemPendingScanningDiskHasMultiplePagesEnumeration;
@property (nonatomic) char itemPendingScanningDiskHasMultiplePagesEnumeration;
@property (nonatomic) char hasItemPendingScanningDiskNumberOfChildrenPendingReconciliation;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenPendingReconciliation;
@property (nonatomic) char hasItemPendingScanningDiskNumberOfChildrenNotPendingReconciliation;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenNotPendingReconciliation;
@property (nonatomic) char hasItemPendingScanningDiskNumberOfChildrenPendingSyncUpDeletion;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenPendingSyncUpDeletion;
@property (nonatomic) char hasItemPendingScanningDiskNumberOfChildrenPendingSyncDownDeletion;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenPendingSyncDownDeletion;
@property (nonatomic) char hasItemPendingScanningDiskNumberOfChildrenPendingSyncUpReparent;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenPendingSyncUpReparent;
@property (nonatomic) char hasItemPendingScanningDiskNumberOfChildrenPendingSyncUp;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenPendingSyncUp;
@property (nonatomic) char hasItemPendingScanningDiskNumberOfChildrenPendingSyncDownReparent;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenPendingSyncDownReparent;
@property (nonatomic) char hasItemPendingScanningDiskNumberOfChildrenPendingSyncDown;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenPendingSyncDown;
@property (nonatomic) char hasItemPendingScanningDiskNumberOfChildrenPendingRejection;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenPendingRejection;
@property (nonatomic) char hasItemPendingScanningProviderEnumerationStatus;
@property (nonatomic) long long itemPendingScanningProviderEnumerationStatus;
@property (nonatomic) char hasItemPendingScanningProviderHasMultiplePagesEnumeration;
@property (nonatomic) char itemPendingScanningProviderHasMultiplePagesEnumeration;
@property (nonatomic) char hasItemPendingScanningProviderNumberOfChildren;
@property (nonatomic) long long itemPendingScanningProviderNumberOfChildren;
@property (nonatomic) char hasItemPendingScanningProviderNumberOfChildrenPendingCreation;
@property (nonatomic) long long itemPendingScanningProviderNumberOfChildrenPendingCreation;
@property (nonatomic) char hasItemPendingScanningProviderNumberOfChildrenFailingCreation;
@property (nonatomic) long long itemPendingScanningProviderNumberOfChildrenFailingCreation;
@property (nonatomic) char hasItemPendingScanningProviderRemovalOfDatalessBitStatus;
@property (nonatomic) long long itemPendingScanningProviderRemovalOfDatalessBitStatus;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end

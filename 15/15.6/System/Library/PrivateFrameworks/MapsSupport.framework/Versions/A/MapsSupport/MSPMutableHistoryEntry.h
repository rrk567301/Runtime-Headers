@class MSPHistoryEntryStorage, NSString, NSUUID, NSDate;

@interface MSPMutableHistoryEntry : NSObject <MSPHistoryEntry, MSPMutableObject> {
    NSUUID *_storageIdentifier;
}

@property (readonly, nonatomic, getter=_isImmutable) char immutable;
@property (readonly, nonatomic) MSPHistoryEntryStorage *storage;
@property (copy, nonatomic) NSDate *usageDate;
@property (nonatomic, getter=tracksRAPReportingOnly) char tracksRAPReportingOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)mutableObjectClass;
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (id)mutableHistoryEntryForStorage:(id)a0;
+ (id)mutableObjectProtocol;

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithStorage:(id)a0;
- (char)isFailed;
- (id)storageIdentifier;
- (void)_noteWillMutate;
- (char)_isUserVisibleDuplicateOfSameClassObject:(id)a0;
- (void)_markImmutable;
- (id)copyIfValidWithError:(out id *)a0;
- (id)debugTitle;
- (void)ifMutableSearch:(id /* block */)a0 ifMutableRoute:(id /* block */)a1 ifMutablePlaceDisplay:(id /* block */)a2 ifMutableTransitLineItem:(id /* block */)a3;
- (void)ifSearch:(id /* block */)a0 ifRoute:(id /* block */)a1 ifPlaceDisplay:(id /* block */)a2 ifTransitLineItem:(id /* block */)a3;
- (char)isUserVisibleDuplicateOfEntry:(id)a0;
- (id)transferToImmutableIfValidWithError:(out id *)a0;

@end

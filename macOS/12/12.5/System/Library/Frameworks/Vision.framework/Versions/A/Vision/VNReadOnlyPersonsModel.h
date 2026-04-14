@class NSString, VNPersonsModelFaceModel;

@interface VNReadOnlyPersonsModel : VNPersonsModel <VNPersonsModelDataSource> {
    VNPersonsModelFaceModel *_faceModel_DO_NOT_ACCESS_DIRECTLY;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newModelFromVersion:(unsigned long long)a0 objects:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)upToDateFaceModelWithCanceller:(id)a0 error:(id *)a1;
- (unsigned long long)numberOfPersonsInPersonsModel:(id)a0;
- (id)personsModel:(id)a0 uniqueIdentifierOfPersonAtIndex:(unsigned long long)a1;
- (unsigned long long)personsModel:(id)a0 indexOfPersonWithUniqueIdentifier:(id)a1;
- (unsigned long long)personsModel:(id)a0 numberOfFaceObservationsForPersonAtIndex:(unsigned long long)a1;
- (id)personsModel:(id)a0 faceObservationAtIndex:(unsigned long long)a1 forPersonAtIndex:(unsigned long long)a2;
- (unsigned long long)personCount;
- (id)faceObservationsForPersonWithUniqueIdentifier:(id)a0 error:(id *)a1;
- (id)personUniqueIdentifiers;
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)a0;
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)a0;
- (id)faceCountsForAllPersons;
- (id)initWithConfiguration:(id)a0 faceModel:(id)a1;

@end

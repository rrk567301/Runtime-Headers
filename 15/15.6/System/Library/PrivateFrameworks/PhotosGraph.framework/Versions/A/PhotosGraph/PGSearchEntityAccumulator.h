@class NSDictionary, PGGraphSearchEntity;

@interface PGSearchEntityAccumulator : NSObject <PGSearchEntityProvider> {
    void /* unknown type, empty encoding */ internalSearchEntitiesByMomentUUID;
    void /* unknown type, empty encoding */ internalMePersonEntity;
    void /* unknown type, empty encoding */ internalRelatedPersonAndPetDescriptorByPersonIdentifier;
    void /* unknown type, empty encoding */ synonymsByCategoryMask;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ graphSearchEntityDonationEnabled;
}

@property (nonatomic, readonly) NSDictionary *searchEntitiesByMomentUUID;
@property (nonatomic, readonly) NSDictionary *relatedPersonAndPetDescriptorByRelatedPersonIdentifier;
@property (nonatomic, readonly) PGGraphSearchEntity *mePersonEntity;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSynonymsByCategoryMask:(id)a0;
- (char)accumulateHolidays:(id)a0 forMomentUUID:(id)a1 error:(id *)a2;
- (char)accumulateHomeAndWorkWithHomeAndWorkKeywords:(id)a0 forMomentUUID:(id)a1 dateInterval:(id)a2 error:(id *)a3;
- (char)accumulateMeanings:(id)a0 forMomentUUID:(id)a1 error:(id *)a2;
- (char)accumulatePersonAndPetRelationshipsFromGraph:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (char)accumulatePublicEventsInPublicEventKeywords:(id)a0 forMomentUUID:(id)a1 dateInterval:(id)a2 error:(id *)a3;
- (char)accumulateSeasons:(id)a0 forMomentUUID:(id)a1 error:(id *)a2;
- (char)accumulateTrip:(id)a0 forMomentUUID:(id)a1 error:(id *)a2;

@end

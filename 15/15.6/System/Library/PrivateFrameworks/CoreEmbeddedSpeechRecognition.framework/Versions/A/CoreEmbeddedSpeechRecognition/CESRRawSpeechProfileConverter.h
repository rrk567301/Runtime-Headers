@class NSSet, NSMutableDictionary, NSDictionary, KVProfile;

@interface CESRRawSpeechProfileConverter : NSObject {
    NSSet *_omitItemTypes;
    KVProfile *_primaryProfile;
    NSMutableDictionary *_companionProfiles;
    NSDictionary *_primaryPriors;
    NSMutableDictionary *_companionPriors;
}

- (id)init;
- (void).cxx_destruct;
- (char)addCompanionRawSpeechProfile:(id)a0 deviceId:(id)a1 userId:(id)a2 error:(id *)a3;
- (id)convertToKVProfileWithError:(id *)a0;
- (id)initWithOmittedItemTypes:(id)a0;
- (char)setPrimaryRawSpeechProfile:(id)a0 error:(id *)a1;
- (char)_processRawSpeechProfile:(id)a0 deviceId:(id)a1 userId:(id)a2 error:(id *)a3;

@end

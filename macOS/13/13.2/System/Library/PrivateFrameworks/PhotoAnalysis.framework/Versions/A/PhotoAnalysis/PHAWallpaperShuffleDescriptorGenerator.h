@class PHPhotoLibrary, PFPseudoRandomNumberGenerator, NSObject;
@protocol OS_os_log;

@interface PHAWallpaperShuffleDescriptorGenerator : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
    PFPseudoRandomNumberGenerator *_randomNumberGenerator;
    long long _shuffleMinimumSuggestionRequired;
}

+ (unsigned short)wallpaperTopSubtypeFromShuffleSubtype:(unsigned short)a0;
+ (id)displayNameLocalizationKeyForTopSubtype:(unsigned short)a0;

- (void).cxx_destruct;
- (id)initWithPHPhotoLibrary:(id)a0 loggingConnection:(id)a1;
- (id)shuffleDescriptorsForDonation;
- (id)shufflePosterDescriptorForShuffleSubtype:(unsigned short)a0 personLocalIdentifiers:(id)a1 suggestionUUIDsToAvoid:(id)a2 requireMinimumShuffleCount:(BOOL)a3;
- (id)peopleShufflePosterDescriptors;
- (id)allVIPShufflePosterDescriptorFromEligiblePersonLocalIdentifiers:(id)a0;
- (id)shuffleVIPPersonLocalIdentifiers;
- (id)shuffleDescriptorEligiblePersonLocalIdentifiers;
- (id)descriptorForSuggestion:(id)a0;
- (id)suggestionPersonLocalIdentifiersFromSuggestions:(id)a0;
- (id)baseSuggestionFetchOptionsWithSubtype:(unsigned short)a0 personLocalIdentifiers:(id)a1 suggestionUUIDsToAvoid:(id)a2;
- (id)fetchSuggestionWithSubtype:(unsigned short)a0 personLocalIdentifiers:(id)a1;

@end

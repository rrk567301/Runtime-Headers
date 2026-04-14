@class HMHome, NSArray, HMAccessory;

@interface HMMediaGroupsValidator : NSObject {
    void /* function */ selectedDestinations;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSArray *allDestinations;
@property (nonatomic, readonly) NSArray *otherDestinations;
@property (nonatomic, readonly) NSArray *allSourceAccessories;
@property (nonatomic, copy) NSArray *selectedDestinations;
@property (nonatomic, retain) HMAccessory *selectedSourceAccessory;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)accessoriesFor:(id)a0;
- (BOOL)hasValidSelectedSoloDestination;
- (BOOL)hasValidSelectedSourceAccessory;
- (id)mediaSystemFor:(id)a0;
- (id)accessoryFor:(id)a0;
- (id)allSourceAccessoryIdentifiers;
- (id)availableDestinationIdentifiersForHomeTheaterSolo;
- (id)availableDestinationIdentifiersForHomeTheaterStereo;
- (id)availableDestinationIdentifiersForStereoPair;
- (id)availableDestinationsForGroupTypes:(unsigned long long)a0;
- (id)availableSourceAccessoriesForGroupTypes:(unsigned long long)a0;
- (id)availableSourceAccessoryIdentifiersForHomeTheaterSolo;
- (id)availableSourceAccessoryIdentifiersForHomeTheaterStereo;
- (BOOL)canFormHomeTheaterSolo;
- (BOOL)canFormHomeTheaterStereo;
- (BOOL)canFormStereoPair;
- (BOOL)hasPossibleOrValidSolo;
- (BOOL)hasPossibleOrValidSource;
- (BOOL)hasValidSelectedStereoDestination;
- (BOOL)hasValidSelectedStereoDestinationsWithCheckHomeTheaterCapability:(BOOL)a0;
- (id)mediaSystemDestinations;
- (id)unpairedAccessoryDestinations;
- (unsigned long long)validGroupTypesForCurrentSelections;

@end

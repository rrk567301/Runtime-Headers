@class MAEdgeFilter, NSString;

@interface PGGraphRelationshipEdge : PGGraphOptimizedEdge

@property (class, readonly) MAEdgeFilter *inferredRelationshipFilter;
@property (class, readonly) MAEdgeFilter *confirmedRelationshipFilter;
@property (class, readonly) MAEdgeFilter *partnerFilter;
@property (class, readonly) MAEdgeFilter *inferredPartnerFilter;
@property (class, readonly) MAEdgeFilter *fatherFilter;
@property (class, readonly) MAEdgeFilter *inferredFatherFilter;
@property (class, readonly) MAEdgeFilter *motherFilter;
@property (class, readonly) MAEdgeFilter *inferredMotherFilter;
@property (class, readonly) MAEdgeFilter *brotherFilter;
@property (class, readonly) MAEdgeFilter *inferredBrotherFilter;
@property (class, readonly) MAEdgeFilter *sisterFilter;
@property (class, readonly) MAEdgeFilter *inferredSisterFilter;
@property (class, readonly) MAEdgeFilter *daughterFilter;
@property (class, readonly) MAEdgeFilter *inferredDaughterFilter;
@property (class, readonly) MAEdgeFilter *sonFilter;
@property (class, readonly) MAEdgeFilter *inferredSonFilter;
@property (class, readonly) MAEdgeFilter *parentFilter;
@property (class, readonly) MAEdgeFilter *inferredParentFilter;
@property (class, readonly) MAEdgeFilter *familyFilter;
@property (class, readonly) MAEdgeFilter *inferredFamilyFilter;
@property (class, readonly) MAEdgeFilter *familySocialGroupFilter;
@property (class, readonly) MAEdgeFilter *inferredFamilySocialGroupFilter;
@property (class, readonly) MAEdgeFilter *childFilter;
@property (class, readonly) MAEdgeFilter *inferredChildFilter;
@property (class, readonly) MAEdgeFilter *friendFilter;
@property (class, readonly) MAEdgeFilter *inferredFriendFilter;
@property (class, readonly) MAEdgeFilter *coworkerFilter;
@property (class, readonly) MAEdgeFilter *inferredCoworkerFilter;
@property (class, readonly) MAEdgeFilter *coworkerSocialGroupFilter;
@property (class, readonly) MAEdgeFilter *inferredCoworkerSocialGroupFilter;
@property (class, readonly) MAEdgeFilter *acquaintanceFilter;
@property (class, readonly) MAEdgeFilter *inferredAcquaintanceFilter;
@property (class, readonly) MAEdgeFilter *vipFilter;
@property (class, readonly) MAEdgeFilter *inferredVipFilter;

@property (readonly) NSString *relationship;
@property (readonly) double confidence;
@property (readonly) unsigned long long status;
@property (readonly) unsigned char source;
@property (readonly) double familyHolidayAttendanceRate;
@property (readonly) unsigned char hasParentContactName : 2;
@property (readonly) unsigned char hasSameFamilyNameAsMePerson : 2;
@property (readonly) unsigned int numberOfMomentsAtHome : 32;
@property (readonly) unsigned char hasAnniversaryDate : 2;
@property (readonly) unsigned char isTopTwoPersonsSocialGroup : 2;
@property (readonly) unsigned int numberOfLoveEmojisExchanged : 32;
@property (readonly) unsigned char isTopPerson : 2;
@property (readonly) double friendNightOutAttendanceRate;
@property (readonly) double partnerTripAttendanceRate;
@property (readonly) double friendsAndFamilyTripAttendanceRate;
@property (readonly) double weekendAppearanceRatio;
@property (readonly) double momentsAtWorkAppearanceRate;
@property (readonly) double calendarAttendanceRatio;
@property (readonly) unsigned char isPersonAgeDifferentThanMeNode : 2;
@property (readonly) unsigned char isPersonOldEnoughToBeParentOrGrandparent : 2;
@property (readonly) char isPersonYoungEnoughToBeMeNodeChild;

+ (id)filter;
+ (id)filterWithInferredRelationship:(id)a0;
+ (id)familyRelationshipLabels;
+ (id)filterWithConfirmedRelationship:(id)a0;
+ (id)filterWithRelationship:(id)a0;
+ (id)filterWithRelationship:(id)a0 status:(unsigned long long)a1;
+ (id)filterWithSource:(unsigned char)a0;
+ (id)propertiesWithRelationshipSource:(unsigned char)a0;
+ (id)relationshipSourceToString:(unsigned char)a0;
+ (id)supportedRelationshipLabels;

- (void).cxx_destruct;
- (unsigned short)domain;
- (id)label;
- (char)hasProperties:(id)a0;
- (id)edgeDescription;
- (id)_readableStringForProperty:(id)a0;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)initWithRelationship:(id)a0 fromPersonNode:(id)a1 toPersonNode:(id)a2 confidence:(double)a3 status:(unsigned long long)a4 familyHolidayAttendanceRate:(double)a5 hasParentContactName:(char)a6 hasSameFamilyNameAsMePerson:(char)a7 numberOfMomentsAtHome:(unsigned long long)a8 hasAnniversaryDate:(char)a9 isTopTwoPersonsSocialGroup:(char)a10 numberOfLoveEmojisExchanged:(unsigned long long)a11 isTopPerson:(char)a12 friendNightOutAttendanceRate:(double)a13 partnerTripAttendanceRate:(double)a14 friendsAndFamilyTripAttendanceRate:(double)a15 weekendAppearanceRatio:(double)a16 momentsAtWorkAppearanceRate:(double)a17 calendarAttendanceRatio:(double)a18 isPersonAgeDifferentThanMeNode:(char)a19 isPersonOldEnoughToBeParentOrGrandparent:(char)a20 isPersonYoungEnoughToBeMeNodeChild:(char)a21 source:(unsigned char)a22;
- (id)propertyDictionary;

@end

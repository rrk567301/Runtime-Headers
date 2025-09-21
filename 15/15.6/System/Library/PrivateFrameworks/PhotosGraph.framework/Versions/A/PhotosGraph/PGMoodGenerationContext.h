@class NSMutableDictionary, NSDate;

@interface PGMoodGenerationContext : NSObject {
    NSMutableDictionary *_isLongTimeNoSeeByPersonLocalIdentifier;
    NSMutableDictionary *_isLongTimeNoSeeBySocialGroupUUID;
    NSMutableDictionary *_isLongTimeNoSeeByLocationUUID;
    NSDate *_longTimeNoSeePeopleLatestDate;
    NSDate *_longTimeNoSeeLocationLatestDate;
}

- (void).cxx_destruct;
- (id)initWithReferenceDate:(id)a0;
- (char)locationIsLongTimeNoSeeWithLocationNode:(id)a0;
- (char)momentIsLongTimeNoSeeForLocationWithMomentNode:(id)a0;
- (char)momentIsLongTimeNoSeeForPeopleWithMomentNode:(id)a0;
- (char)personIsLongTimeNoSeeWithPersonNode:(id)a0;
- (char)socialGroupIsLongTimeNoSeeWithSocialGroupNode:(id)a0;

@end

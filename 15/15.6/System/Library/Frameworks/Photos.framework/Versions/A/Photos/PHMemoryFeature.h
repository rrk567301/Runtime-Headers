@class NSObject;

@interface PHMemoryFeature : NSObject <NSSecureCoding> {
    NSObject *_subtypeSpecificAttribute;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;

+ (id)stringForType:(unsigned long long)a0;
+ (id)personLocalIdentifierForPersonUniversalIdentifier:(id)a0 photoLibrary:(id)a1;
+ (id)personUniversalIdentifierForPersonLocalIdentifier:(id)a0 photoLibrary:(id)a1;
+ (id)encodedBlockableFeatures:(id)a0 photoLibrary:(id)a1;
+ (id)locationMemoryFeatureWithAreaForName:(id)a0;
+ (id)locationMemoryFeatureWithLocation:(id)a0;
+ (id)memoryFeatureWithData:(id)a0 photoLibrary:(id)a1;
+ (id)peopleMemoryFeatureWithPersonLocalIdentifier:(id)a0;
+ (id)timeMemoryFeatureWithDate:(id)a0;
+ (id)timeMemoryFeatureWithDateInterval:(id)a0;
+ (id)timeMemoryFeatureWithHolidayForName:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)date;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)location;
- (id)dateInterval;
- (id)_personLocalIdentifierFromSubtypeSpecificAttribute;
- (id)areaName;
- (char)collidesWithAreaWithName:(id)a0;
- (char)collidesWithDate:(id)a0;
- (char)collidesWithDateInterval:(id)a0;
- (char)collidesWithFeature:(id)a0;
- (char)collidesWithHolidayWithName:(id)a0;
- (char)collidesWithLocationAtCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (char)collidesWithPersonWithLocalIdentifier:(id)a0;
- (id)encodedDataWithPhotoLibrary:(id)a0;
- (id)holidayName;
- (id)personLocalIdentifier;

@end

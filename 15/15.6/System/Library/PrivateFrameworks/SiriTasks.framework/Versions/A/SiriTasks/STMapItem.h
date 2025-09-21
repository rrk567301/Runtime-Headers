@class NSString, NSData, CLLocation, NSNumber;

@interface STMapItem : STSiriModelObject {
    NSString *_title;
    CLLocation *_location;
    NSData *_placeData;
    char _isCurrentLocation;
    NSNumber *_businessID;
    NSNumber *_localSearchProviderID;
}

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)_aceCollectionClass;
- (id)_aceContextObjectValue;
- (id)initWithMKMapItem:(id)a0;

@end

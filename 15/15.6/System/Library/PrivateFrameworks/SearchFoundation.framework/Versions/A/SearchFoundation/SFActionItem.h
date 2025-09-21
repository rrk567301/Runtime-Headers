@class NSData, NSString, NSArray, SFImage, NSURL, NSDictionary, SFLatLng, SFPunchout;

@interface SFActionItem : NSObject <SFActionItem, NSSecureCoding, NSCopying> {
    struct { unsigned char isOverlay : 1; unsigned char requiresLocalMedia : 1; unsigned char latitude : 1; unsigned char longitude : 1; unsigned char isITunes : 1; unsigned char mediaEntityType : 1; unsigned char shouldSearchDirectionsAlongCurrentRoute : 1; unsigned char directionsMode : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *labelForLocalMedia;
@property (nonatomic) char isOverlay;
@property (copy, nonatomic) NSArray *storeIdentifiers;
@property (nonatomic) char requiresLocalMedia;
@property (copy, nonatomic) NSString *localMediaIdentifier;
@property (retain, nonatomic) SFPunchout *punchout;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSData *mapsData;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (copy, nonatomic) NSString *provider;
@property (copy, nonatomic) NSString *offerType;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *labelITunes;
@property (nonatomic) char isITunes;
@property (retain, nonatomic) SFImage *icon;
@property (retain, nonatomic) SFImage *baseIcon;
@property (retain, nonatomic) SFLatLng *location;
@property (copy, nonatomic) NSString *messageIdentifier;
@property (copy, nonatomic) NSURL *messageURL;
@property (copy, nonatomic) NSString *persistentID;
@property (nonatomic) int mediaEntityType;
@property (copy, nonatomic) NSString *universalLibraryID;
@property (copy, nonatomic) NSString *interactionContentType;
@property (retain, nonatomic) SFPunchout *customDirectionsPunchout;
@property (nonatomic) char shouldSearchDirectionsAlongCurrentRoute;
@property (nonatomic) int directionsMode;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)hasLatitude;
- (char)hasLongitude;
- (id)initWithProtobuf:(id)a0;
- (char)hasDirectionsMode;
- (char)hasIsITunes;
- (char)hasIsOverlay;
- (char)hasMediaEntityType;
- (char)hasRequiresLocalMedia;
- (char)hasShouldSearchDirectionsAlongCurrentRoute;

@end

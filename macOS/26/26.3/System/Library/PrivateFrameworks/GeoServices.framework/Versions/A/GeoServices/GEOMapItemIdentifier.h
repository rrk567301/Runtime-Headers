@class NSData, NSString, GEOPDMapsIdentifier;

@interface GEOMapItemIdentifier : NSObject <NSCopying, NSSecureCoding> {
    GEOPDMapsIdentifier *_mapsIdentifier;
    NSString *_mapsIdentifierString;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) struct { double x0; double x1; } coordinate;
@property (readonly, nonatomic) int resultProviderID;
@property (readonly, nonatomic, getter=hasCoordinate) BOOL hasCoordinate;
@property (readonly, nonatomic) NSData *comparableRepresentation;
@property (readonly, nonatomic) BOOL hasMapsIdentifierString;
@property (readonly, nonatomic) NSString *mapsIdentifierString;

+ (id)mapItemIdentifiersFromMapsIdentifiers:(id)a0;

- (id)initWithMapItem:(id)a0;
- (id)debugDescription;
- (id)initWithMUID:(unsigned long long)a0;
- (id)initWithMapsIdentifier:(id)a0;
- (BOOL)isEqualToGEOMapItemIdentifier:(id)a0;
- (id)description;
- (id)init;
- (id)initWithBasemapId:(unsigned long long)a0 resultProviderID:(int)a1 coordinate:(struct { double x0; double x1; })a2;
- (id)mapsIdentifier;
- (id)initWithMUID:(unsigned long long)a0 sourceID:(unsigned int)a1;
- (void).cxx_destruct;
- (id)initWithMUID:(unsigned long long)a0 resultProviderID:(int)a1 coordinate:(struct { double x0; double x1; })a2;
- (id)initWithCoder:(id)a0;
- (id)shortDebugDescription;
- (id)initWithMUID:(unsigned long long)a0 coordinate:(struct { double x0; double x1; })a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithEncodedMapsIdentifier:(id)a0;
- (id)initWithPlace:(id)a0;
- (BOOL)isValid;
- (BOOL)isValidForOfflineUse;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMapsIdentifierString:(id)a0;

@end

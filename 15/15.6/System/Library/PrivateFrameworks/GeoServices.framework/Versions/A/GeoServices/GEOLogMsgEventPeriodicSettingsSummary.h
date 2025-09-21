@class GEOLogMsgStateDeviceSettings, GEOLogMsgStateMapsUserSettings, GEOLogMsgStateDeviceConnection, GEOLogMsgStateMapUIShown, PBUnknownFields, GEOLogMsgStateMapsFeatures, GEOLogMsgStateAccount, PBDataReader, GEOLogMsgStateRoutingSettings, GEOLogMsgStateMapSettings;

@interface GEOLogMsgEventPeriodicSettingsSummary : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLogMsgStateAccount *_account;
    GEOLogMsgStateDeviceConnection *_deviceConnection;
    GEOLogMsgStateDeviceSettings *_deviceSettings;
    GEOLogMsgStateMapSettings *_mapSettings;
    GEOLogMsgStateMapUIShown *_mapUiShown;
    GEOLogMsgStateMapsFeatures *_mapsFeatures;
    GEOLogMsgStateMapsUserSettings *_mapsUserSettings;
    GEOLogMsgStateRoutingSettings *_routingSettings;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _electricVehicleCount;
    unsigned int _favoritesCount;
    unsigned int _licensePlateCount;
    unsigned int _personalCollectionsCount;
    char _homeFavoriteSet;
    char _learnFromAppEnabled;
    char _notificationsEnabled;
    char _siriSuggestionsEnabled;
    char _workFavoriteSet;
    struct { unsigned char has_electricVehicleCount : 1; unsigned char has_favoritesCount : 1; unsigned char has_licensePlateCount : 1; unsigned char has_personalCollectionsCount : 1; unsigned char has_homeFavoriteSet : 1; unsigned char has_learnFromAppEnabled : 1; unsigned char has_notificationsEnabled : 1; unsigned char has_siriSuggestionsEnabled : 1; unsigned char has_workFavoriteSet : 1; unsigned char read_unknownFields : 1; unsigned char read_account : 1; unsigned char read_deviceConnection : 1; unsigned char read_deviceSettings : 1; unsigned char read_mapSettings : 1; unsigned char read_mapUiShown : 1; unsigned char read_mapsFeatures : 1; unsigned char read_mapsUserSettings : 1; unsigned char read_routingSettings : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasMapSettings;
@property (retain, nonatomic) GEOLogMsgStateMapSettings *mapSettings;
@property (readonly, nonatomic) char hasMapUiShown;
@property (retain, nonatomic) GEOLogMsgStateMapUIShown *mapUiShown;
@property (nonatomic) char hasNotificationsEnabled;
@property (nonatomic) char notificationsEnabled;
@property (nonatomic) char hasHomeFavoriteSet;
@property (nonatomic) char homeFavoriteSet;
@property (nonatomic) char hasWorkFavoriteSet;
@property (nonatomic) char workFavoriteSet;
@property (nonatomic) char hasFavoritesCount;
@property (nonatomic) unsigned int favoritesCount;
@property (nonatomic) char hasPersonalCollectionsCount;
@property (nonatomic) unsigned int personalCollectionsCount;
@property (nonatomic) char hasElectricVehicleCount;
@property (nonatomic) unsigned int electricVehicleCount;
@property (nonatomic) char hasLicensePlateCount;
@property (nonatomic) unsigned int licensePlateCount;
@property (nonatomic) char hasSiriSuggestionsEnabled;
@property (nonatomic) char siriSuggestionsEnabled;
@property (nonatomic) char hasLearnFromAppEnabled;
@property (nonatomic) char learnFromAppEnabled;
@property (readonly, nonatomic) char hasAccount;
@property (retain, nonatomic) GEOLogMsgStateAccount *account;
@property (readonly, nonatomic) char hasDeviceConnection;
@property (retain, nonatomic) GEOLogMsgStateDeviceConnection *deviceConnection;
@property (readonly, nonatomic) char hasMapsUserSettings;
@property (retain, nonatomic) GEOLogMsgStateMapsUserSettings *mapsUserSettings;
@property (readonly, nonatomic) char hasRoutingSettings;
@property (retain, nonatomic) GEOLogMsgStateRoutingSettings *routingSettings;
@property (readonly, nonatomic) char hasMapsFeatures;
@property (retain, nonatomic) GEOLogMsgStateMapsFeatures *mapsFeatures;
@property (readonly, nonatomic) char hasDeviceSettings;
@property (retain, nonatomic) GEOLogMsgStateDeviceSettings *deviceSettings;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end

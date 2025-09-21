@class NSData, NSString;

@interface ADSegmentUpdateRequest : PBRequest <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _accountStates;
    struct { int *list; unsigned long long count; unsigned long long size; } _accountTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _deviceModes;
    struct { unsigned char iTunesRefreshTime : 1; unsigned char updateSentTime : 1; unsigned char advertisingIdentifierMonthResetCount : 1; unsigned char timezone : 1; unsigned char isFirstPartyIdentifier : 1; } _has;
}

@property (readonly, nonatomic) char hasIAdID;
@property (retain, nonatomic) NSData *iAdID;
@property (readonly, nonatomic) char hasSegmentInfo;
@property (retain, nonatomic) NSString *segmentInfo;
@property (nonatomic) char hasIsFirstPartyIdentifier;
@property (nonatomic) char isFirstPartyIdentifier;
@property (readonly, nonatomic) char hasAdvertisingIdentifier;
@property (retain, nonatomic) NSString *advertisingIdentifier;
@property (nonatomic) char hasITunesRefreshTime;
@property (nonatomic) double iTunesRefreshTime;
@property (nonatomic) char hasUpdateSentTime;
@property (nonatomic) double updateSentTime;
@property (nonatomic) char hasTimezone;
@property (nonatomic) float timezone;
@property (nonatomic) char hasAdvertisingIdentifierMonthResetCount;
@property (nonatomic) int advertisingIdentifierMonthResetCount;
@property (readonly, nonatomic) char hasOsVersionAndBuild;
@property (retain, nonatomic) NSString *osVersionAndBuild;
@property (readonly, nonatomic) char hasLocaleIdentifier;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) char hasDPID;
@property (retain, nonatomic) NSData *dPID;
@property (readonly, nonatomic) unsigned long long deviceModesCount;
@property (readonly, nonatomic) int *deviceModes;
@property (readonly, nonatomic) unsigned long long accountTypesCount;
@property (readonly, nonatomic) int *accountTypes;
@property (readonly, nonatomic) unsigned long long accountStatesCount;
@property (readonly, nonatomic) int *accountStates;

+ (id)options;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAccountType:(int)a0;
- (void)addAccountState:(int)a0;
- (void)addDeviceMode:(int)a0;
- (int)StringAsAccountStates:(id)a0;
- (int)StringAsDeviceModes:(id)a0;
- (int)StringAsAccountTypes:(id)a0;
- (int)accountStateAtIndex:(unsigned long long)a0;
- (id)accountStatesAsString:(int)a0;
- (int)accountTypeAtIndex:(unsigned long long)a0;
- (id)accountTypesAsString:(int)a0;
- (void)clearAccountStates;
- (void)clearAccountTypes;
- (void)clearDeviceModes;
- (int)deviceModeAtIndex:(unsigned long long)a0;
- (id)deviceModesAsString:(int)a0;
- (void)setAccountStates:(int *)a0 count:(unsigned long long)a1;
- (void)setAccountTypes:(int *)a0 count:(unsigned long long)a1;
- (void)setDeviceModes:(int *)a0 count:(unsigned long long)a1;

@end

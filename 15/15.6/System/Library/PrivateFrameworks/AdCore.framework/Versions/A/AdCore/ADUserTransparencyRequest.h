@class NSData, NSString;

@interface ADUserTransparencyRequest : PBRequest <NSCopying> {
    struct { unsigned char isSignedInToiTunes : 1; unsigned char limitAdTracking : 1; } _has;
}

@property (readonly, nonatomic) char hasDPID;
@property (retain, nonatomic) NSData *dPID;
@property (readonly, nonatomic) char hasLocaleIdentifier;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) char hasIAdID;
@property (retain, nonatomic) NSData *iAdID;
@property (readonly, nonatomic) char hasContentiAdID;
@property (retain, nonatomic) NSData *contentiAdID;
@property (readonly, nonatomic) char hasITunesStore;
@property (retain, nonatomic) NSString *iTunesStore;
@property (nonatomic) char hasLimitAdTracking;
@property (nonatomic) char limitAdTracking;
@property (nonatomic) char hasIsSignedInToiTunes;
@property (nonatomic) char isSignedInToiTunes;

+ (id)options;

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

@end

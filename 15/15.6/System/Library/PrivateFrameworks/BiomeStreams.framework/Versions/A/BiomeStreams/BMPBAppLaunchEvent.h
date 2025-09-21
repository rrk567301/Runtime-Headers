@class NSString;

@interface BMPBAppLaunchEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char duration : 1; unsigned char launchType : 1; unsigned char starting : 1; } _has;
}

@property (readonly, nonatomic) char hasLaunchReason;
@property (retain, nonatomic) NSString *launchReason;
@property (nonatomic) char hasLaunchType;
@property (nonatomic) int launchType;
@property (nonatomic) char hasStarting;
@property (nonatomic) char starting;
@property (nonatomic) char hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) char hasDuration;
@property (nonatomic) double duration;
@property (readonly, nonatomic) char hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) char hasParentBundleID;
@property (retain, nonatomic) NSString *parentBundleID;
@property (readonly, nonatomic) char hasExtensionHostID;
@property (retain, nonatomic) NSString *extensionHostID;
@property (readonly, nonatomic) char hasShortVersionString;
@property (retain, nonatomic) NSString *shortVersionString;
@property (readonly, nonatomic) char hasExactVersionString;
@property (retain, nonatomic) NSString *exactVersionString;

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
- (int)StringAsLaunchType:(id)a0;
- (id)launchTypeAsString:(int)a0;

@end

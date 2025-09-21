@class NSData, NSString;

@interface ADAttributionRequest : PBRequest <NSCopying> {
    struct { unsigned char downloadClickTimestamp : 1; unsigned char iAdConversionTimestamp : 1; unsigned char iAdImpressionTimestamp : 1; unsigned char purchaseTimestamp : 1; unsigned char searchAdClickTimestamp : 1; unsigned char downloadType : 1; unsigned char runState : 1; unsigned char attributedByiTunes : 1; } _has;
}

@property (readonly, nonatomic) char hasIAdID;
@property (retain, nonatomic) NSData *iAdID;
@property (readonly, nonatomic) char hasTiltID;
@property (retain, nonatomic) NSData *tiltID;
@property (readonly, nonatomic) char hasAnonymousDemandiAdID;
@property (retain, nonatomic) NSData *anonymousDemandiAdID;
@property (readonly, nonatomic) char hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) char hasPurchaseTimestamp;
@property (nonatomic) double purchaseTimestamp;
@property (nonatomic) char hasIAdConversionTimestamp;
@property (nonatomic) double iAdConversionTimestamp;
@property (nonatomic) char hasIAdImpressionTimestamp;
@property (nonatomic) double iAdImpressionTimestamp;
@property (nonatomic) char hasAttributedByiTunes;
@property (nonatomic) char attributedByiTunes;
@property (nonatomic) char hasRunState;
@property (nonatomic) int runState;
@property (readonly, nonatomic) char hasToroID;
@property (retain, nonatomic) NSData *toroID;
@property (readonly, nonatomic) char hasDPID;
@property (retain, nonatomic) NSData *dPID;
@property (nonatomic) char hasSearchAdClickTimestamp;
@property (nonatomic) double searchAdClickTimestamp;
@property (readonly, nonatomic) char hasAdMetadata;
@property (retain, nonatomic) NSString *adMetadata;
@property (nonatomic) char hasDownloadClickTimestamp;
@property (nonatomic) double downloadClickTimestamp;
@property (nonatomic) char hasDownloadType;
@property (nonatomic) int downloadType;

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
- (int)StringAsRunState:(id)a0;
- (int)StringAsDownloadType:(id)a0;
- (id)downloadTypeAsString:(int)a0;
- (id)runStateAsString:(int)a0;

@end

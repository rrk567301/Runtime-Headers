@class NSData;

@interface AWDWiFiActionFrameEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char actionCode : 1; unsigned char btmAbridged : 1; unsigned char btmBssTerminationIncluded : 1; unsigned char btmDisassociationImminent : 1; unsigned char btmDisassociationTimeout : 1; unsigned char btmEssTerminationIncluded : 1; unsigned char btmHasPreferredCandidateList : 1; unsigned char btmTerminationDuration : 1; unsigned char btmValidityInterval : 1; unsigned char categoryCode : 1; unsigned char dialogToken : 1; unsigned char environmentType : 1; unsigned char frameType : 1; unsigned char status : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasOui;
@property (retain, nonatomic) NSData *oui;
@property (nonatomic) char hasEnvironmentType;
@property (nonatomic) unsigned int environmentType;
@property (nonatomic) char hasCategoryCode;
@property (nonatomic) unsigned int categoryCode;
@property (nonatomic) char hasActionCode;
@property (nonatomic) unsigned int actionCode;
@property (nonatomic) char hasDialogToken;
@property (nonatomic) unsigned int dialogToken;
@property (nonatomic) char hasStatus;
@property (nonatomic) unsigned int status;
@property (nonatomic) char hasFrameType;
@property (nonatomic) unsigned int frameType;
@property (nonatomic) char hasBtmDisassociationTimeout;
@property (nonatomic) unsigned int btmDisassociationTimeout;
@property (nonatomic) char hasBtmValidityInterval;
@property (nonatomic) unsigned int btmValidityInterval;
@property (nonatomic) char hasBtmTerminationDuration;
@property (nonatomic) unsigned int btmTerminationDuration;
@property (nonatomic) char hasBtmHasPreferredCandidateList;
@property (nonatomic) unsigned int btmHasPreferredCandidateList;
@property (nonatomic) char hasBtmAbridged;
@property (nonatomic) unsigned int btmAbridged;
@property (nonatomic) char hasBtmDisassociationImminent;
@property (nonatomic) unsigned int btmDisassociationImminent;
@property (nonatomic) char hasBtmBssTerminationIncluded;
@property (nonatomic) unsigned int btmBssTerminationIncluded;
@property (nonatomic) char hasBtmEssTerminationIncluded;
@property (nonatomic) unsigned int btmEssTerminationIncluded;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end

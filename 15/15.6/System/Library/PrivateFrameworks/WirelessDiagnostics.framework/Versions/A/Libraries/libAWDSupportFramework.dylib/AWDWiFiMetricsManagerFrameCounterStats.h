@class AWDDataFrames, AWDControlFrames, AWDManagementFrames;

@interface AWDWiFiMetricsManagerFrameCounterStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasRxControl;
@property (retain, nonatomic) AWDControlFrames *rxControl;
@property (readonly, nonatomic) char hasTxControl;
@property (retain, nonatomic) AWDControlFrames *txControl;
@property (readonly, nonatomic) char hasRxData;
@property (retain, nonatomic) AWDDataFrames *rxData;
@property (readonly, nonatomic) char hasTxData;
@property (retain, nonatomic) AWDDataFrames *txData;
@property (readonly, nonatomic) char hasRxManagement;
@property (retain, nonatomic) AWDManagementFrames *rxManagement;
@property (readonly, nonatomic) char hasTxManagement;
@property (retain, nonatomic) AWDManagementFrames *txManagement;

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

@class NSString, NSData;

@interface _MRSendHIDReportMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasVirtualDeviceID;
@property (retain, nonatomic) NSString *virtualDeviceID;
@property (readonly, nonatomic) BOOL hasReport;
@property (retain, nonatomic) NSData *report;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end

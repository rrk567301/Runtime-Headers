@class DRSProtoRequestDescription, NSString, NSMutableArray;

@interface DRSProtoDiagnosticUploadRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRequestDescription;
@property (retain, nonatomic) DRSProtoRequestDescription *requestDescription;
@property (readonly, nonatomic) BOOL hasIssueDescription;
@property (retain, nonatomic) NSString *issueDescription;
@property (retain, nonatomic) NSMutableArray *logs;

+ (Class)logsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addLogs:(id)a0;
- (void)clearLogs;
- (id)logsAtIndex:(unsigned long long)a0;
- (unsigned long long)logsCount;

@end

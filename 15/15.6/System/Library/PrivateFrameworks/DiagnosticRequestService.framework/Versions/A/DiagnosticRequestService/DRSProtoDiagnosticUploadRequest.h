@class DRSProtoRequestDescription, NSString, NSMutableArray;

@interface DRSProtoDiagnosticUploadRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) char hasRequestDescription;
@property (retain, nonatomic) DRSProtoRequestDescription *requestDescription;
@property (readonly, nonatomic) char hasIssueDescription;
@property (retain, nonatomic) NSString *issueDescription;
@property (retain, nonatomic) NSMutableArray *logs;

+ (Class)logsType;

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
- (void)addLogs:(id)a0;
- (void)clearLogs;
- (id)logsAtIndex:(unsigned long long)a0;
- (unsigned long long)logsCount;

@end

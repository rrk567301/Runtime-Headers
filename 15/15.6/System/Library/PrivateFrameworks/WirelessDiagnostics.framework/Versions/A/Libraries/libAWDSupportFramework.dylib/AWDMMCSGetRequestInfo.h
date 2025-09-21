@class NSString, NSMutableArray;

@interface AWDMMCSGetRequestInfo : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char localBytes : 1; unsigned char resumedBytes : 1; unsigned char startTime : 1; unsigned char timestamp : 1; unsigned char cancelledErrorCode : 1; unsigned char itemCount : 1; unsigned char itemCountFailed : 1; unsigned char itemCountSuccessful : 1; unsigned char itemsNeedingChunks : 1; unsigned char requestErrorCode : 1; unsigned char allItemsFailed : 1; unsigned char allItemsSuccessful : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) long long timestamp;
@property (readonly, nonatomic) char hasClientId;
@property (retain, nonatomic) NSString *clientId;
@property (nonatomic) char hasStartTime;
@property (nonatomic) long long startTime;
@property (nonatomic) char hasDuration;
@property (nonatomic) long long duration;
@property (readonly, nonatomic) char hasCancelledErrorDomain;
@property (retain, nonatomic) NSString *cancelledErrorDomain;
@property (nonatomic) char hasCancelledErrorCode;
@property (nonatomic) int cancelledErrorCode;
@property (readonly, nonatomic) char hasRequestErrorDomain;
@property (retain, nonatomic) NSString *requestErrorDomain;
@property (nonatomic) char hasRequestErrorCode;
@property (nonatomic) int requestErrorCode;
@property (nonatomic) char hasItemCount;
@property (nonatomic) int itemCount;
@property (nonatomic) char hasItemsNeedingChunks;
@property (nonatomic) int itemsNeedingChunks;
@property (nonatomic) char hasLocalBytes;
@property (nonatomic) long long localBytes;
@property (nonatomic) char hasResumedBytes;
@property (nonatomic) long long resumedBytes;
@property (retain, nonatomic) NSMutableArray *authHttpInfos;
@property (retain, nonatomic) NSMutableArray *containerHttpInfos;
@property (retain, nonatomic) NSMutableArray *completeHttpInfos;
@property (retain, nonatomic) NSMutableArray *cancelErrors;
@property (retain, nonatomic) NSMutableArray *errors;
@property (nonatomic) char hasAllItemsSuccessful;
@property (nonatomic) char allItemsSuccessful;
@property (nonatomic) char hasItemCountSuccessful;
@property (nonatomic) unsigned int itemCountSuccessful;
@property (nonatomic) char hasAllItemsFailed;
@property (nonatomic) char allItemsFailed;
@property (nonatomic) char hasItemCountFailed;
@property (nonatomic) unsigned int itemCountFailed;
@property (readonly, nonatomic) char hasCkContainerId;
@property (retain, nonatomic) NSString *ckContainerId;

+ (Class)errorType;
+ (Class)cancelErrorType;
+ (Class)authHttpInfosType;
+ (Class)completeHttpInfosType;
+ (Class)containerHttpInfosType;

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
- (void)clearErrors;
- (unsigned long long)errorsCount;
- (void)addError:(id)a0;
- (void)addCancelError:(id)a0;
- (void)addAuthHttpInfos:(id)a0;
- (void)addCompleteHttpInfos:(id)a0;
- (void)addContainerHttpInfos:(id)a0;
- (id)authHttpInfosAtIndex:(unsigned long long)a0;
- (unsigned long long)authHttpInfosCount;
- (id)cancelErrorAtIndex:(unsigned long long)a0;
- (unsigned long long)cancelErrorsCount;
- (void)clearAuthHttpInfos;
- (void)clearCancelErrors;
- (void)clearCompleteHttpInfos;
- (void)clearContainerHttpInfos;
- (id)completeHttpInfosAtIndex:(unsigned long long)a0;
- (unsigned long long)completeHttpInfosCount;
- (id)containerHttpInfosAtIndex:(unsigned long long)a0;
- (unsigned long long)containerHttpInfosCount;
- (id)errorAtIndex:(unsigned long long)a0;

@end

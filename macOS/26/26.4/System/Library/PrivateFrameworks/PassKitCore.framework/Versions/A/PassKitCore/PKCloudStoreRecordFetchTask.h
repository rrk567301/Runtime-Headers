@class NSString, NSDate, PKCloudStoreZone, NSError;

@interface PKCloudStoreRecordFetchTask : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSString *transactionSourceIdentifier;
@property (retain, nonatomic) PKCloudStoreZone *cloudStoreZone;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) long long backoffLevel;
@property (copy, nonatomic) NSDate *nextPossibleFetchDate;
@property (copy, nonatomic) NSError *lastError;

- (id)initWithType:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)identifier;
- (void)completeTaskWithError:(id)a0 throttled:(BOOL)a1;
- (id)initWithCloudStoreZone:(id)a0 type:(unsigned long long)a1;
- (id)initWithTransactionSourceIdentifier:(id)a0 type:(unsigned long long)a1;
- (BOOL)isCompletedOrThrottled;
- (BOOL)lastErrorIsSetupAssistantNotComplete;
- (void)queueTask;
- (void)startTask;

@end

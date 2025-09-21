@class NSString, NSNumber, NSArray;

@interface IMDIndexingContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL fullReindex;
@property (nonatomic) long long messagesContributingToFullReindex;
@property (nonatomic) long long chatsContributingToFullReindex;
@property (retain, nonatomic) NSString *oldestFullReindexMessageGUID;
@property (nonatomic) BOOL preflight;
@property (nonatomic) BOOL ignoreRejections;
@property (nonatomic) BOOL ignoreThrottle;
@property (nonatomic) BOOL forceDeferral;
@property (retain, nonatomic) NSNumber *laneOverride;
@property (nonatomic) BOOL needsPriorityCheck;
@property (retain, nonatomic) NSArray *additionalReasons;
@property (readonly, nonatomic) BOOL mayUpdateUI;
@property (nonatomic, getter=isReindexing) BOOL reindexing;
@property (nonatomic) long long reason;
@property (nonatomic) BOOL runningViaBGST;

+ (id)contextWithReason:(long long)a0;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initForReindexing:(BOOL)a0 reason:(long long)a1 runningViaBGST:(BOOL)a2 fullReindex:(BOOL)a3 messagesContributingToFullReindex:(long long)a4 chatsContributingToFullReindex:(long long)a5 oldestFullReindexMessageGUID:(id)a6 preflight:(BOOL)a7 ignoreRejections:(BOOL)a8 ignoreThrottle:(BOOL)a9 forceDeferral:(BOOL)a10 laneOverride:(id)a11 needsPriorityCheck:(BOOL)a12 additionalReasons:(id)a13;
- (id)initForReindexing:(BOOL)a0 reason:(long long)a1;
- (id)initForReindexing:(BOOL)a0 reason:(long long)a1 runningViaBGST:(BOOL)a2;
- (id)initForReindexing:(BOOL)a0 reason:(long long)a1 runningViaBGST:(BOOL)a2 userInfo:(id)a3;

@end

@class NSData, NSDictionary, NSDate;

@interface NSPersistentHistoryChangeRequestToken : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, retain, nonatomic) NSData *fetchData;
@property (readonly, retain, nonatomic) NSDictionary *token;
@property (readonly, retain, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long resultType;
@property (readonly, nonatomic) char delete;
@property (readonly, nonatomic) char transactionFromToken;
@property (readonly, nonatomic) unsigned long long fetchLimit;
@property (readonly, nonatomic) unsigned long long fetchOffset;
@property (readonly, nonatomic) unsigned long long fetchBatchSize;
@property (readonly, nonatomic) unsigned long long percentageOfDB;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initForRequest:(id)a0;

@end

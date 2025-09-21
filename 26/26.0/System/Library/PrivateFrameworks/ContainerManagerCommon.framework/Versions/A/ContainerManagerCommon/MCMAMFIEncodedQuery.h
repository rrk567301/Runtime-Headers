@class NSString, NSData;

@interface MCMAMFIEncodedQuery : NSObject

@property (readonly, nonatomic) NSString *loggingName;
@property (readonly, nonatomic) unsigned long long reason;
@property (readonly, nonatomic) NSData *encodedQuery;

- (void).cxx_destruct;
- (id)initWithLoggingName:(id)a0 reason:(unsigned long long)a1 encodedQuery:(id)a2;

@end

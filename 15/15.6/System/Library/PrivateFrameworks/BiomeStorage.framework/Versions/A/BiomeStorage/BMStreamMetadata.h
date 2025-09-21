@class NSString, BMAccount, BMPruningPolicy;

@interface BMStreamMetadata : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *remoteStreamName;
@property (retain, nonatomic) BMAccount *account;
@property (readonly, nonatomic) NSString *streamId;
@property (readonly, nonatomic) Class eventDataClass;
@property (readonly, nonatomic) BMPruningPolicy *pruningPolicy;
@property (readonly, nonatomic) char isRemote;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithStreamId:(id)a0 eventType:(Class)a1 account:(id)a2 remoteStreamName:(id)a3 pruningPolicy:(id)a4;
- (id)initWithStreamId:(id)a0 eventType:(Class)a1 remoteStreamName:(id)a2 pruningPolicy:(id)a3;

@end

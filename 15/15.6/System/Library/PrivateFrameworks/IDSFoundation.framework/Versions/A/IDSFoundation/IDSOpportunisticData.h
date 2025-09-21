@class NSMutableDictionary, NSString, NSData, IDSOpportunisticOptions;

@interface IDSOpportunisticData : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *sendCount;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSString *accountUniqueID;
@property (retain, nonatomic) IDSOpportunisticOptions *options;

- (id)copy;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isInvalid;
- (void)incrementSendCountForDestination:(id)a0;
- (id)initWithData:(id)a0 identifier:(id)a1 serviceName:(id)a2 accountUniqueID:(id)a3 options:(id)a4;
- (id)initWithData:(id)a0 identifier:(id)a1 serviceName:(id)a2 accountUniqueID:(id)a3 options:(id)a4 sendCount:(id)a5;
- (void)markInvalid;
- (long long)sendCountForURI:(id)a0;
- (char)shouldSendToDestination:(id)a0;

@end

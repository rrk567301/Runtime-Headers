@class NSArray;

@interface NFCoreNFCPollConfig : NFReaderSessionPollConfig

@property (nonatomic) unsigned long long pollingOption;
@property (nonatomic) unsigned long long sessionConfig;
@property (retain, nonatomic) NSArray *iso7816SelectIdentifiers;
@property (retain, nonatomic) NSArray *felicaSystemCodes;

+ (BOOL)supportsSecureCoding;
+ (id)pollConfigWithOption:(unsigned long long)a0 sessionConfig:(unsigned long long)a1;
+ (id)pollConfigWithOption:(unsigned long long)a0 sessionConfig:(unsigned long long)a1 iso7816SelectIdentifiers:(id)a2 felicaSystemCodes:(id)a3;

- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end

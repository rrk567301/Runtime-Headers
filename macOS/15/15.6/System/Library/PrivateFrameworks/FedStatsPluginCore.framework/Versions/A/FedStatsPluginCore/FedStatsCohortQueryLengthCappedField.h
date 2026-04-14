@class NSString;

@interface FedStatsCohortQueryLengthCappedField : NSObject <FedStatsCohortQueryProtocol>

@property (readonly, nonatomic) NSString *keyName;
@property (readonly, nonatomic) unsigned long long cap;

+ (id)cohortQueryFieldWithKey:(id)a0 cap:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)padCohortValue:(id)a0;
- (id)cohortKeyForParameters:(id)a0 possibleError:(id *)a1;
- (id)initQueryFieldWithKey:(id)a0 cap:(unsigned long long)a1;

@end

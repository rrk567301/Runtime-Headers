@class NSURL, NSString, BMDSL;

@interface BMDSLPersistentDerivatives : BMDSL

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) BMDSL *upstream;

+ (char)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)bpsPublisher;
- (id)initWithUpstream:(id)a0 databaseURL:(id)a1 derivedTableName:(id)a2;
- (id)initWithUpstream:(id)a0 databaseURL:(id)a1 derivedTableName:(id)a2 name:(id)a3 version:(unsigned int)a4;
- (id)upstreams;

@end

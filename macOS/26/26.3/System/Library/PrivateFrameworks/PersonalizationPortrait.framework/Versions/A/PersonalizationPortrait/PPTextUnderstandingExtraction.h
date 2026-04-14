@class NSArray;

@interface PPTextUnderstandingExtraction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *namedEntities;
@property (retain, nonatomic) NSArray *topics;
@property (nonatomic) unsigned long long topicAlgorithm;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithNamedEntities:(id)a0 topics:(id)a1 topicAlgorithm:(unsigned long long)a2;
- (BOOL)isEqualToTextUnderstandingExtraction:(id)a0;

@end

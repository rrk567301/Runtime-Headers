@interface CPLRecordComputeStateVersion : NSObject

@property (readonly, nonatomic) unsigned long long majorVersion;
@property (readonly, nonatomic) unsigned long long stage;

- (id)asString;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)initWithString:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)redactedDescription;
- (id)initWithMajorVersion:(unsigned long long)a0 stage:(unsigned long long)a1;

@end

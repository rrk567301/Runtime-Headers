@interface CPLRecordComputeStateVersion : NSObject

@property (readonly, nonatomic) unsigned long long majorVersion;
@property (readonly, nonatomic) unsigned long long stage;

- (long long)compare:(id)a0;
- (id)redactedDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithString:(id)a0;
- (id)asString;
- (id)description;
- (id)initWithMajorVersion:(unsigned long long)a0 stage:(unsigned long long)a1;

@end

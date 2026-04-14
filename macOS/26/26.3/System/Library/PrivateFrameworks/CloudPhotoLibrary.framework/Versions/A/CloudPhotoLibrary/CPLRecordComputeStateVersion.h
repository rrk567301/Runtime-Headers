@interface CPLRecordComputeStateVersion : NSObject

@property (readonly, nonatomic) unsigned long long majorVersion;
@property (readonly, nonatomic) unsigned long long stage;

- (id)description;
- (long long)compare:(id)a0;
- (id)asString;
- (id)initWithString:(id)a0;
- (id)redactedDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithMajorVersion:(unsigned long long)a0 stage:(unsigned long long)a1;

@end

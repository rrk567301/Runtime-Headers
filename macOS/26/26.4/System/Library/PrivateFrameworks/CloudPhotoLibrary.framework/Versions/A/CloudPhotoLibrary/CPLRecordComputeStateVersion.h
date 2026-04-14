@interface CPLRecordComputeStateVersion : NSObject

@property (readonly, nonatomic) unsigned long long majorVersion;
@property (readonly, nonatomic) unsigned long long stage;

- (id)initWithString:(id)a0;
- (long long)compare:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)asString;
- (id)redactedDescription;
- (id)initWithMajorVersion:(unsigned long long)a0 stage:(unsigned long long)a1;

@end

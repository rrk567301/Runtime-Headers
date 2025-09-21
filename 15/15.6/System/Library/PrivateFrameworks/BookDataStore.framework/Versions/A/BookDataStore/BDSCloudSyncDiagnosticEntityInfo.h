@class NSString, NSArray, NSDictionary;

@interface BDSCloudSyncDiagnosticEntityInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (nonatomic) char enabledSync;
@property (retain, nonatomic) NSArray *dirtyCloudDataInfos;
@property (readonly, nonatomic) NSDictionary *stateForLog;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 enabledSync:(char)a1 dirtyCloudDataInfos:(id)a2;

@end

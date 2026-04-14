@class NSString;
@protocol MIStagingRootProtocol;

@interface MIStagingLocation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *relativeStagingBaseDirectory;
@property (readonly, nonatomic) id<MIStagingRootProtocol> stagingRoot;

+ (id)_stagingRootClassCluster;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStagingRoot:(id)a0 relativeStagingBaseDirectory:(id)a1;
- (id)resolveWithError:(id *)a0;

@end

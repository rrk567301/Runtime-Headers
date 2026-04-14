@class NSUUID, NSString;

@interface _SFAnalysisOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL highPriority;
@property (readonly, copy, nonatomic) NSUUID *asrID;
@property (readonly, copy, nonatomic) NSUUID *requestID;
@property (readonly, copy, nonatomic) NSString *aneContext;
@property (readonly, copy, nonatomic) NSString *cpuContext;
@property (readonly, copy, nonatomic) NSString *gpuContext;
@property (readonly, nonatomic) BOOL keepANEModelLoaded;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHighPriority:(BOOL)a0 asrID:(id)a1 requestID:(id)a2 aneContext:(id)a3 cpuContext:(id)a4 gpuContext:(id)a5 keepANEModelLoaded:(BOOL)a6;

@end

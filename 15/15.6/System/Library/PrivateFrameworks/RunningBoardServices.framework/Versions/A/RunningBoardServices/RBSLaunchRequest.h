@class RBSLaunchContext, NSString;

@interface RBSLaunchRequest : RBSRequest <RBSXPCSecureCoding, NSCopying>

@property (readonly, nonatomic) RBSLaunchContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsRBSXPCSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)execute:(out id *)a0 assertion:(out id *)a1 error:(out id *)a2;
- (id)initWithContext:(id)a0;
- (id)executeRequest;
- (char)execute:(out id *)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (char)execute:(out id *)a0 error:(out id *)a1;
- (id)initWithRBSXPCCoder:(id)a0;

@end

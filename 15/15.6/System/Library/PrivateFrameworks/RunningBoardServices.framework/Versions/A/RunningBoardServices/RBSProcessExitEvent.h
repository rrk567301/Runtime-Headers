@class RBSProcessExitContext, NSString, RBSProcessHandle;

@interface RBSProcessExitEvent : NSObject <RBSXPCSecureCoding>

@property (retain, nonatomic) RBSProcessHandle *process;
@property (retain, nonatomic) RBSProcessExitContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsRBSXPCSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;

@end

@class NSString, WFDialogResponseContext;

@interface WFDialogResponse : NSObject <BSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) long long responseCode;
@property (retain, nonatomic) WFDialogResponseContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCancelled:(BOOL)a0;
- (id)initWithResponseCode:(long long)a0;
- (BOOL)shouldDismissDialogInTransientMode;

@end

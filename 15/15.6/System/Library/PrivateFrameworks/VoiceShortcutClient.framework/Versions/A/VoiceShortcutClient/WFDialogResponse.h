@class NSString;

@interface WFDialogResponse : NSObject <BSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=isCancelled) char cancelled;
@property (readonly, nonatomic) long long responseCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsBSXPCSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithCancelled:(char)a0;
- (id)initWithResponseCode:(long long)a0;
- (char)shouldDismissDialogInTransientMode;

@end

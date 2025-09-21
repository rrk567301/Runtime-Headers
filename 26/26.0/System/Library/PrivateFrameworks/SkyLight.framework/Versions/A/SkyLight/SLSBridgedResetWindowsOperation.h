@class NSArray;

@interface SLSBridgedResetWindowsOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly, copy) NSArray *windows;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithWindows:(id)a0;
- (void)invokeFallback;

@end

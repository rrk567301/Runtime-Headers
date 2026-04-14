@class NSArray;

@interface SLSBridgedAddWindowsToSpacesOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly, copy) NSArray *windows;
@property (readonly, copy) NSArray *spaces;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithWindows:(id)a0 spaces:(id)a1;
- (void)invokeFallback;

@end

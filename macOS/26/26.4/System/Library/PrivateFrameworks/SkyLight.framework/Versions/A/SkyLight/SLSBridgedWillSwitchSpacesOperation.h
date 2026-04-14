@class NSArray;

@interface SLSBridgedWillSwitchSpacesOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly, copy) NSArray *spaces;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSpaces:(id)a0;
- (void)invokeFallback;

@end

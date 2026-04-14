@class NSArray;

@interface SLSBridgedWillSwitchSpacesOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly, copy) NSArray *spaces;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSpaces:(id)a0;
- (void)invokeFallback;

@end

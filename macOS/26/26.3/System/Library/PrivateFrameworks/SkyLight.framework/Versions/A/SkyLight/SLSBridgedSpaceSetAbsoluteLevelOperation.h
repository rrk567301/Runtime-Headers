@interface SLSBridgedSpaceSetAbsoluteLevelOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;
@property (readonly) int level;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSpaceID:(unsigned long long)a0 level:(int)a1;
- (void)invokeFallback;

@end

@interface SLSBridgedSpaceAddOwnerOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;
@property (readonly) int owner;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSpaceID:(unsigned long long)a0 owner:(int)a1;
- (void)invokeFallback;

@end

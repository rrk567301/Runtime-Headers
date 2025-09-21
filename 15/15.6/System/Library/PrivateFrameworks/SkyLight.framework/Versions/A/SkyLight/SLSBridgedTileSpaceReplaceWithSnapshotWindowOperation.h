@interface SLSBridgedTileSpaceReplaceWithSnapshotWindowOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSpaceID:(unsigned long long)a0;
- (id)invokeFallback;
- (id)makeResultWithWindowID:(unsigned int)a0;

@end

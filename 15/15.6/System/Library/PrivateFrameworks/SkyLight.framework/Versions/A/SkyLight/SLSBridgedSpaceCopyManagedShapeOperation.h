@interface SLSBridgedSpaceCopyManagedShapeOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSpaceID:(unsigned long long)a0;
- (id)invokeFallback;
- (id)makeResultWithRegion:(struct CGSRegionObject { } *)a0;

@end

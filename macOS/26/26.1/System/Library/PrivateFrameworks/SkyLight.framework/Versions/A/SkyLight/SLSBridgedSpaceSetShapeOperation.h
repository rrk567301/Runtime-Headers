@interface SLSBridgedSpaceSetShapeOperation : SLSAsynchronousBridgedWindowManagementOperation {
    struct CGSRegionObject { } *_shape;
}

@property (readonly) unsigned long long spaceID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (struct CGSRegionObject { } *)copyShape;
- (id)initWithSpaceID:(unsigned long long)a0 shape:(struct CGSRegionObject { } *)a1;
- (void)invokeFallback;

@end

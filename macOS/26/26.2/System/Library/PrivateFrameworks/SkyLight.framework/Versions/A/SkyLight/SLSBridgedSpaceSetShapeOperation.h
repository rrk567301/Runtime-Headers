@interface SLSBridgedSpaceSetShapeOperation : SLSAsynchronousBridgedWindowManagementOperation {
    struct CGSRegionObject { } *_shape;
}

@property (readonly) unsigned long long spaceID;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (struct CGSRegionObject { } *)copyShape;
- (id)initWithSpaceID:(unsigned long long)a0 shape:(struct CGSRegionObject { } *)a1;
- (void)invokeFallback;

@end

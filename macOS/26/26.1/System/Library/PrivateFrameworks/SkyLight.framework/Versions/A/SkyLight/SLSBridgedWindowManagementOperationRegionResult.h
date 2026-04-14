@interface SLSBridgedWindowManagementOperationRegionResult : SLSBridgedWindowManagementOperationResult {
    struct CGSRegionObject { } *_region;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithRegion:(struct CGSRegionObject { } *)a0;
- (struct CGSRegionObject { } *)copyRegion;

@end

@interface SLSBridgedWindowManagementOperationRegionResult : SLSBridgedWindowManagementOperationResult {
    struct CGSRegionObject { } *_region;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithRegion:(struct CGSRegionObject { } *)a0;
- (struct CGSRegionObject { } *)copyRegion;

@end

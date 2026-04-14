@class NSDictionary;

@interface SLSBridgedSpaceGetSizeForProposedTileOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;
@property (readonly, copy) NSDictionary *values;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSpaceID:(unsigned long long)a0 values:(id)a1;
- (id)invokeFallback;
- (id)makeResultWithSize:(struct CGSize { double x0; double x1; })a0;

@end

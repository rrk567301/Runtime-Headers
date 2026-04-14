@class NSDictionary;

@interface SLSBridgedSpaceCreateTileOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;
@property (readonly, copy) NSDictionary *values;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSpaceID:(unsigned long long)a0 values:(id)a1;
- (id)invokeFallback;
- (id)makeResultWithSpaceID:(unsigned long long)a0;

@end

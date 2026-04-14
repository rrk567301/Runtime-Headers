@class NSString;

@interface SLSBridgedSpaceWithNameOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly, copy) NSString *name;

+ (BOOL)supportsSecureCoding;

- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)invokeFallback;
- (id)makeResultWithSpaceID:(unsigned long long)a0;

@end

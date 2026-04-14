@class NSArray;

@interface SLSBridgedSpaceSetOwnersOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;
@property (readonly, copy) NSArray *owners;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSpaceID:(unsigned long long)a0 owners:(id)a1;
- (void)invokeFallback;

@end

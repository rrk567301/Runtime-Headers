@class NSArray;

@interface SLSBridgedSpaceRemoveValuesForKeysOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;
@property (readonly, copy) NSArray *keys;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSpaceID:(unsigned long long)a0 keys:(id)a1;
- (void)invokeFallback;

@end

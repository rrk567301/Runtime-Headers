@class NSString;

@interface SLSBridgedSpaceSetNameOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;
@property (readonly, copy) NSString *name;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSpaceID:(unsigned long long)a0 name:(id)a1;
- (void)invokeFallback;

@end

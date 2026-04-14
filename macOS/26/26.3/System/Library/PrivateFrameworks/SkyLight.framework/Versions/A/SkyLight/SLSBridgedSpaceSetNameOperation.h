@class NSString;

@interface SLSBridgedSpaceSetNameOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;
@property (readonly, copy) NSString *name;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSpaceID:(unsigned long long)a0 name:(id)a1;
- (void)invokeFallback;

@end

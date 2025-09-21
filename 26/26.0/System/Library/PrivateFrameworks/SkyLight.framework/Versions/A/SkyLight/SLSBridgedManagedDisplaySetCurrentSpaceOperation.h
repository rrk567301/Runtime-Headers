@class NSString;

@interface SLSBridgedManagedDisplaySetCurrentSpaceOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly, copy) NSString *displayIdentifier;
@property (readonly) unsigned long long spaceID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDisplayIdentifier:(id)a0 spaceID:(unsigned long long)a1;
- (void)invokeFallback;

@end

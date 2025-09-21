@class NSString;

@interface SLSBridgedMoveManagedSpaceToDisplayIndexOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;
@property (readonly, copy) NSString *displayIdentifier;
@property (readonly) unsigned int index;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSpaceID:(unsigned long long)a0 displayIdentifier:(id)a1 index:(unsigned int)a2;
- (void)invokeFallback;

@end

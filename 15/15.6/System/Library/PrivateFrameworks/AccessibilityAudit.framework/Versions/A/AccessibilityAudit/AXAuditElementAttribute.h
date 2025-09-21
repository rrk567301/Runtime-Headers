@class NSString;

@interface AXAuditElementAttribute : NSObject <AXAuditTransportableObjectProtocol>

@property (copy, nonatomic) NSString *attributeName;
@property (copy, nonatomic) NSString *developerAPISelector;
@property (copy, nonatomic) NSString *humanReadableName;
@property (nonatomic, getter=isSettable) char settable;
@property (nonatomic) char performsAction;
@property (nonatomic) char isSupported;
@property (nonatomic) char isInternal;
@property (nonatomic) char displayInline;
@property (nonatomic) char displayAsTree;
@property (nonatomic) long long valueType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerTransportableObjectWithManager:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end

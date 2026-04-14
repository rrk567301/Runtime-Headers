@class NSString, AXFUIElement;

@interface AXAuditElement : NSObject <AXAuditTransportableObjectProtocol, NSCopying>

@property (copy, nonatomic) AXFUIElement *axfUIElement;
@property (retain, nonatomic) id platformElementToken;
@property (copy, nonatomic) id accessibilityIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerTransportableObjectWithManager:(id)a0;
+ (id)auditElementWithElement:(id)a0 identifier:(id)a1;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct __AXUIElement { } *)createAxElementRefForXCTest;
- (void)setAxfUIElement:(id)a0;
- (id)axfUIElement;

@end

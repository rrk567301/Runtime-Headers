@class NSString;

@interface XCTAccessibilityFramework : NSObject <XCTAccessibilityFramework>

@property struct __AXUIElement { } *systemWideElement;
@property (readonly) int processID;
@property (readonly) char allowsRemoteAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (char)PIDForAXUIElement:(struct __AXUIElement { } *)a0 PID:(int *)a1 error:(id *)a2;
- (id)_attributesForElement:(id)a0 iOSAttributes:(id)a1 error:(id *)a2;
- (char)_canAccessElement:(struct __AXUIElement { } *)a0 withError:(id *)a1;
- (id)_displayStringForAXUIElementProcess:(struct __AXUIElement { } *)a0;
- (id)attributes:(id)a0 forElement:(struct __AXUIElement { } *)a1 error:(id *)a2;
- (id)attributesForElement:(id)a0 attributes:(id)a1 error:(id *)a2;
- (id)hierarchyForElement:(struct __AXUIElement { } *)a0 attributes:(id)a1 options:(id)a2 error:(id *)a3;
- (id)initAllowingRemoteAccess:(char)a0 processID:(int)a1;
- (id)initForLocalAccess;
- (id)initForRemoteAccess;
- (id)parameterizedAttribute:(id)a0 forElement:(struct __AXUIElement { } *)a1 parameter:(id)a2 error:(id *)a3;

@end

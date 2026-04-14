@interface _AXFUIElementDataProviderApplication : _AXFUIElementDataProviderIPC

@property (nonatomic) int applicationProcessIdentifier;
@property (nonatomic) struct ProcessSerialNumber { unsigned int highLongOfPSN; unsigned int lowLongOfPSN; } applicationProcessSerialNumber;
@property (nonatomic) int realApplicationProcessIdentifier;
@property (nonatomic) struct ProcessSerialNumber { unsigned int highLongOfPSN; unsigned int lowLongOfPSN; } realApplicationProcessSerialNumber;

+ (BOOL)_shouldCreateInstanceForApplicationRef:(struct __AXUIElement { } *)a0 applicationProcessIdentifier:(int)a1 applicationProcessSerialNumber:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a2 applicationIdentifier:(id)a3;
+ (struct __AXUIElement { } *)_validateApplicationRef:(struct __AXUIElement { } *)a0 withPID:(int)a1;
+ (id)_validateIdentifier:(id)a0 withPSN:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a1;
+ (int)_validatePID:(int)a0 withApplicationRef:(struct __AXUIElement { } *)a1;
+ (int)_validatePID:(int)a0 withPSN:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a1;
+ (struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })_validatePSN:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a0 withPID:(int)a1;

- (id)_initWithApplicationRef:(struct __AXUIElement { } *)a0 applicationProcessIdentifier:(int)a1 applicationProcessSerialNumber:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a2 applicationIdentifier:(id)a3 filterEnabled:(BOOL)a4;
- (id)applicationElement;
- (id)initWithApplicationProcessIdentifier:(int)a0 filterEnabled:(BOOL)a1;
- (id)initWithApplicationRef:(struct __AXUIElement { } *)a0 applicationProcessIdentifier:(int)a1 applicationProcessSerialNumber:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a2 applicationIdentifier:(id)a3;

@end

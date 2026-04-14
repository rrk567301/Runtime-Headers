@class NSData;

@interface XCAccessibilityElement : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSData *token;
@property (readonly) unsigned long long elementOrHash;
@property (readonly) unsigned long long elementID;
@property (readonly) const struct __AXUIElement { } *AXUIElement;
@property (readonly) int processIdentifier;
@property (readonly) unsigned long long elementType;
@property (readonly) unsigned long long originPlatform;

+ (id)elementWithAXUIElement:(struct __AXUIElement { } *)a0;
+ (id)elementWithProcessIdentifier:(int)a0 originPlatform:(unsigned long long)a1;
+ (id)elementWithProcessIdentifier:(int)a0;
+ (id)deviceElement;
+ (id)mockElementWithProcessIdentifier:(int)a0;
+ (id)mockElementWithProcessIdentifier:(int)a0 payload:(id)a1;
+ (id)mockElementWithProcessIdentifier:(int)a0 originPlatform:(unsigned long long)a1;
+ (id)mockElementWithProcessIdentifier:(int)a0 originPlatform:(unsigned long long)a1 payload:(id)a2;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithToken:(id)a0 elementOrHash:(unsigned long long)a1 elementID:(unsigned long long)a2 pid:(int)a3 elementType:(unsigned long long)a4 originPlatform:(unsigned long long)a5;
- (id)initWithAXUIElement:(struct __AXUIElement { } *)a0 elementType:(unsigned long long)a1 originPlatform:(unsigned long long)a2;

@end

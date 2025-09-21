@interface _GCGamepadEventKeyboardEventAdapterConfig : NSObject <NSSecureCoding> {
    struct UsagePage_Usage_Pair { long long usagePage; long long usage; } _mappings[47];
}

@property (class, readonly) char supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)gamepadElementForUsagePage:(long long)a0 usage:(long long)a1;
- (void)mapUsagePage:(long long)a0 usage:(long long)a1 toGamepadElement:(long long)a2;

@end

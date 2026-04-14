@class NSDate, AIMLISComponentGroup;

@interface AIMLISEventGraph : NSObject {
    void /* unknown type, empty encoding */ eventsInternal;
    void /* unknown type, empty encoding */ $__lazy_storage_$_typeIndex;
    void /* unknown type, empty encoding */ $__lazy_storage_$_innerTypeIndex;
    void /* unknown type, empty encoding */ $__lazy_storage_$_componentIdentifierIndex;
    void /* unknown type, empty encoding */ $__lazy_storage_$_typeAndCIDIndex;
}

@property (nonatomic, readonly) AIMLISComponentGroup *ueiBridge;
@property (nonatomic, readonly) AIMLISComponentGroup *orchBridge;
@property (nonatomic, readonly) AIMLISComponentGroup *nlxBridge;
@property (nonatomic, readonly) AIMLISComponentGroup *asrBridge;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ timestamp;
@property (nonatomic, readonly) NSDate *date;

- (id)init;
- (void).cxx_destruct;
- (id)getComponentGroupBridgesWithType:(Class)a0;
- (id)getComponentGroupBridgeWithType:(Class)a0;
- (id)sievents;
- (id)sieventsWithType:(Class)a0;
- (id)sieventsWithComponentName:(int)a0;
- (id)sieventsWithComponentIdentifier:(id)a0;
- (id)sieventsWithInnerType:(Class)a0;
- (id)sieventWithInnerType:(Class)a0;

@end

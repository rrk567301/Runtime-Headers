@class NSString, NSArray;

@interface RealityKit.__EntityAccessibilityWrapper : NSObject {
    void /* unknown type, empty encoding */ entity;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ rootEntityWrapper;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) char isEntityRoot;
@property (nonatomic, readonly) char isEntityAccessible;
@property (nonatomic, readonly) NSString *entityLabel;
@property (nonatomic, readonly) NSString *entityDescription;
@property (nonatomic, readonly) NSString *entityValue;
@property (nonatomic, readonly) char isEntityActive;
@property (nonatomic, readonly) NSArray *entityAccessibilityCustomActions;
@property (nonatomic, readonly) NSArray *entityAccessibilityCustomContent;
@property (nonatomic, readonly) char entitySupportsAccessibilityActivateAction;

- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateScreenBoundingRectIn:(id)a0;
- (void)entityPerformAccessibilityActivate;
- (void)entityPerformAccessibilityDecrement;
- (void)entityPerformAccessibilityIncrement;

@end

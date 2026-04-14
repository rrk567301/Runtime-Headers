@class NSString, AXFUIElement;

@interface _AXFAction : NSObject <AXFAction>

@property (copy, nonatomic) AXFUIElement *_target;
@property (copy, nonatomic) NSString *_name;
@property (readonly, copy, nonatomic) NSString *accessibilityActionName;
@property (readonly, copy, nonatomic) NSString *accessibilityActionDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newActionWithTarget:(id)a0 name:(id)a1;

@end

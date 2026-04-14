@class NSString, CKObjCType, NSMethodSignature;

@interface CKObjCProperty : NSObject {
    Class _classHandle;
    unsigned long long _flags;
    NSString *_getterSelectorName;
    NSMethodSignature *_getterMethodSignature;
    NSString *_setterSelectorName;
    NSMethodSignature *_setterMethodSignature;
    NSString *_instanceVariableName;
}

@property (readonly, nonatomic) CKObjCType *type;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) SEL getterSelector;
@property (readonly, nonatomic) SEL setterSelector;

- (id)description;
- (long long)compare:(id)a0;
- (void).cxx_destruct;

@end

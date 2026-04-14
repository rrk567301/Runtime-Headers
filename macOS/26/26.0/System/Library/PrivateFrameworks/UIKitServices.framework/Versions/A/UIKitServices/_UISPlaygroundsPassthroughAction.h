@class NSObject;
@protocol NSSecureCoding;

@interface _UISPlaygroundsPassthroughAction : BSAction {
    NSObject<NSSecureCoding> *_decodedObject;
}

@property (readonly, nonatomic) long long type;

+ (id)actionOfType:(long long)a0 object:(id)a1;
+ (id)actionOfType:(long long)a0 object:(id)a1 responseHandler:(id /* block */)a2;

- (long long)UIActionType;
- (void).cxx_destruct;
- (id)_initWithType:(long long)a0 object:(id)a1 responseHandler:(id /* block */)a2;
- (id)decodedObjectOfClass:(Class)a0 error:(id *)a1;

@end

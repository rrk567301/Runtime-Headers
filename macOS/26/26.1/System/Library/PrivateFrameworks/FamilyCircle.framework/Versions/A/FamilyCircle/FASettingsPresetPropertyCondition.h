@class NSString, NSObject;

@interface FASettingsPresetPropertyCondition : NSObject {
    void /* function */ sourceProperty;
}

@property (nonatomic, readonly) NSString *sourceProperty;
@property (nonatomic, readonly) NSObject *operand;
@property (nonatomic, readonly) NSObject *result;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSourceProperty:(id)a0 operand:(id)a1 result:(id)a2;

@end

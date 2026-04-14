@class NSString, NSObject;

@interface FASettingsPresetPropertyCondition : NSObject {
    void /* function */ sourceProperty;
}

@property (nonatomic, readonly) NSString *sourceProperty;
@property (nonatomic, readonly) NSObject *operand;
@property (nonatomic, readonly) NSObject *result;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithSourceProperty:(id)a0 operand:(id)a1 result:(id)a2;

@end

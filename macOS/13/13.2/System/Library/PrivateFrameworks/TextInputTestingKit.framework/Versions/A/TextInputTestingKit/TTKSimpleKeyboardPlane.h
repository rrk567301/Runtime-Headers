@class NSString, NSArray;

@interface TTKSimpleKeyboardPlane : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *keys;

+ (float)keyplaneWidthForKeys:(id)a0;
+ (float)keyplaneHeightForKeys:(id)a0;

- (void).cxx_destruct;
- (id)keyboardOrientation;
- (float)keyboardWidth;
- (id)toJsonDictionary;
- (id)initWithJsonDictionary:(id)a0;
- (id)initWithTIKeyboardLayout:(id)a0;
- (id)initWithName:(id)a0 keys:(id)a1;

@end

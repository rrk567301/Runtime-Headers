@class NSString, NSScriptWhoseTest;

@interface IFRequirement : NSObject {
    NSString *_level;
    NSScriptWhoseTest *_test;
    NSString *_label;
    NSString *_title;
    NSString *_message;
    char _isPathBased;
}

+ (id)allLevels;
+ (char)isFatalErrorIfFailedOnLevel:(id)a0;
+ (id)testWithDictionaryRepresentation:(id)a0 withPkgIdentifier:(id)a1;

- (void)dealloc;
- (id)description;
- (id)message;
- (id)label;
- (id)level;
- (id)test;
- (id)title;
- (char)_isAnySubtestPathBased:(id)a0;
- (char)doesEvaluateSecurely;
- (id)initWithDictionaryRepresentation:(id)a0 fromBundle:(id)a1 withPkgIdentifier:(id)a2;
- (id)initWithLevel:(id)a0 test:(id)a1 label:(id)a2 title:(id)a3 message:(id)a4;
- (char)isPathBased;
- (char)isTrueForTarget:(id)a0;

@end

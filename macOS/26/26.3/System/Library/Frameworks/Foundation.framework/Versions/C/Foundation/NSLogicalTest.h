@interface NSLogicalTest : NSScriptWhoseTest {
    int _operator;
    id _subTests;
}

+ (id)_logicalTestFromDescriptor:(id)a0;

- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isTrue;
- (void)encodeWithCoder:(id)a0;
- (id)_initFromRecord:(id)a0;
- (id)initAndTestWithTests:(id)a0;
- (id)initNotTestWithTest:(id)a0;
- (id)initOrTestWithTests:(id)a0;

@end

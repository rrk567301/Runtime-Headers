@interface NSLogicalTest : NSScriptWhoseTest {
    int _operator;
    id _subTests;
}

+ (id)_logicalTestFromDescriptor:(id)a0;

- (BOOL)isTrue;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)_initFromRecord:(id)a0;
- (id)initAndTestWithTests:(id)a0;
- (id)initNotTestWithTest:(id)a0;
- (id)initOrTestWithTests:(id)a0;

@end

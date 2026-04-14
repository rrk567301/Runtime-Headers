@interface NSLogicalTest : NSScriptWhoseTest {
    int _operator;
    id _subTests;
}

+ (id)_logicalTestFromDescriptor:(id)a0;

- (BOOL)isTrue;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)_initFromRecord:(id)a0;
- (id)initAndTestWithTests:(id)a0;
- (id)initNotTestWithTest:(id)a0;
- (id)initOrTestWithTests:(id)a0;

@end

@interface NSLogicalTest : NSScriptWhoseTest {
    int _operator;
    id _subTests;
}

+ (id)_logicalTestFromDescriptor:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)isTrue;
- (id)init;
- (id)_initFromRecord:(id)a0;
- (id)initAndTestWithTests:(id)a0;
- (id)initNotTestWithTest:(id)a0;
- (id)initOrTestWithTests:(id)a0;

@end

@class NSArray, NEPolicyResult;

@interface NEPolicy : NSObject <NEPrettyDescription> {
    unsigned int _order;
    NEPolicyResult *_result;
    NSArray *_conditions;
}

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithOrder:(unsigned int)a0 result:(id)a1 conditions:(id)a2;

@end

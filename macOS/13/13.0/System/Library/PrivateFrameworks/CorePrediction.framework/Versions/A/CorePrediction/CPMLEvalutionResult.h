@class NSObject;

@interface CPMLEvalutionResult : NSObject {
    NSObject *object;
    unsigned long long count;
}

- (void).cxx_destruct;
- (id)init:(id)a0 withConfigurationList:(id)a1;
- (id)getString;
- (id)getStringList;
- (double)getDouble;
- (int)getInt;
- (id)getList;
- (id)getListDict;

@end

@interface KHDBMessageOptions : NSObject {
    unsigned long long m_returnType;
    unsigned long long m_numberOfArguments;
}

+ (void)initialize;
+ (id)messageOptionsForCount:(unsigned long long)a0 returnType:(unsigned long long)a1;
+ (id)newMessageOptionsForCount:(unsigned long long)a0 returnType:(unsigned long long)a1;

- (unsigned long long)returnType;
- (unsigned long long)numberOfArguments;
- (id)initWithReturnType:(unsigned long long)a0 numberOfArguments:(unsigned long long)a1;

@end

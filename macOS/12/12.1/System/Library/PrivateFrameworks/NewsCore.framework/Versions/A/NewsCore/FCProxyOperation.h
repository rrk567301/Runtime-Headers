@class FCOperation;

@interface FCProxyOperation : FCOperation {
    FCOperation *_underlyingOperation;
}

+ (void)initialize;
+ (id)proxyForOperation:(id)a0;

- (void).cxx_destruct;
- (void)setQualityOfService:(long long)a0;
- (void)setRelativePriority:(long long)a0;
- (void)setPurpose:(id)a0;
- (void)performOperation;
- (unsigned long long)propertiesInheritedByChildOperations;
- (void)operationDidFinishWithError:(id)a0;

@end

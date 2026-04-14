@class NSString, __cap_, __end_;

@interface TSCEGetPivotDataBundle : NSObject {
    struct vector<NSString *, std::allocator<NSString *>> { __end_ **__begin_; __cap_ **x0; id *x1; } _dataFields;
    struct vector<TSCEValue *, std::allocator<TSCEValue *>> { __end_ **__begin_; __cap_ **x0; id *x1; } _dataValues;
    struct vector<bool, std::allocator<bool>> { unsigned long long *__begin_; unsigned long long __size_; unsigned long long __cap_; } _missingGroupingColumn;
}

@property (retain, nonatomic) NSString *aggregateFieldName;
@property (readonly, nonatomic) unsigned long long keyValuePairCount;
@property (nonatomic) unsigned short aggregateIndex;
@property (nonatomic) unsigned char aggregateType;
@property (nonatomic) unsigned char showAsType;

- (id)description;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addDataField:(id)a0 withValue:(id)a1;
- (void)enumerateDataKeyValuePairsUsingBlock:(id /* block */)a0;
- (unsigned long long)firstMissingDataField;
- (void)setMissingDataFieldAtIndex:(unsigned long long)a0;

@end

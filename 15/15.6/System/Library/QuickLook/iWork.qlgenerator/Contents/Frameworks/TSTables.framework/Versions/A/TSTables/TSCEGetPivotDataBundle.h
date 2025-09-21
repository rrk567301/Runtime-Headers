@class NSString, __end_cap_, __end_;

@interface TSCEGetPivotDataBundle : NSObject {
    struct vector<NSString *, std::allocator<NSString *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<NSString *__strong *, std::allocator<NSString *>> { id *__value_; } x1; } _dataFields;
    struct vector<TSCEValue *, std::allocator<TSCEValue *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<TSCEValue *__strong *, std::allocator<TSCEValue *>> { id *__value_; } x1; } _dataValues;
    struct vector<signed char, std::allocator<signed char>> { char *__begin_; char *__end_; struct __compressed_pair<signed char *, std::allocator<signed char>> { char *__value_; } __end_cap_; } _missingGroupingColumn;
}

@property (retain, nonatomic) NSString *aggregateFieldName;
@property (readonly, nonatomic) unsigned long long keyValuePairCount;
@property (nonatomic) unsigned short aggregateIndex;
@property (nonatomic) unsigned char aggregateType;
@property (nonatomic) unsigned char showAsType;

- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)addDataField:(id)a0 withValue:(id)a1;
- (void)enumerateDataKeyValuePairsUsingBlock:(id /* block */)a0;
- (unsigned long long)firstMissingDataField;
- (void)setMissingDataFieldAtIndex:(unsigned long long)a0;

@end

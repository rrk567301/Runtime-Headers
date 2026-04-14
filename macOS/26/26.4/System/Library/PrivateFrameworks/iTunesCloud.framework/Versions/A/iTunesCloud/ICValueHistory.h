@class NSMutableArray;

@interface ICValueHistory : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray *_items;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long count;

- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (void)removeValuesBeforeTimestamp:(unsigned long long)a0;
- (void)removeAllValues;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addValue:(id)a0 timestamp:(unsigned long long)a1;
- (void)addValuesFromHistory:(id)a0;
- (unsigned long long)hash;
- (id)firstValueBeforeTimestamp:(unsigned long long)a0;
- (id)lastValueAndTimestamp:(unsigned long long *)a0;
- (id)initWithCoder:(id)a0;
- (id)firstValueAfterOrEqualToTimestamp:(unsigned long long)a0;
- (id)firstValueBeforeOrEqualToTimestamp:(unsigned long long)a0;
- (id)lastValue;

@end

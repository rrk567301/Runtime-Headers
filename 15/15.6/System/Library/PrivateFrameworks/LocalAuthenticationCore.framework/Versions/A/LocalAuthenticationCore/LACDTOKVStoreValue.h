@class NSData;

@interface LACDTOKVStoreValue : NSObject {
    NSData *_data;
}

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)boolValue;
- (id)data;
- (id)initWithData:(id)a0;
- (long long)integerValue;
- (id)initWithBoolValue:(char)a0;
- (id)initWithIntegerValue:(long long)a0;

@end

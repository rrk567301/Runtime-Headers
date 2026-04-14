@class NSString;

@interface _BSObjCValueBuilder : NSObject <BSObjCValueBuilding> {
    NSString *_encoding;
}

- (void)setValueType:(id)a0;
- (void)setType:(char)a0;
- (void)setEncoding:(id)a0;
- (void).cxx_destruct;
- (void)setCEncoding:(const char *)a0;
- (void)setObjectType:(Class)a0;

@end

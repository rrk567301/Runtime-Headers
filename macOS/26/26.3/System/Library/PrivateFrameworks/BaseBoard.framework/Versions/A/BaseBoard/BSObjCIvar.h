@class NSString, BSObjCValue, NSArray;

@interface BSObjCIvar : NSObject {
    struct objc_ivar { } *_ivar;
    NSString *_name;
    BSObjCValue *_value;
    long long _offset;
    NSArray *_alternateNames;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end

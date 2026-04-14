@class NSString, BSObjCValue, NSArray;

@interface BSObjCIvar : NSObject {
    struct objc_ivar { } *_ivar;
    NSString *_name;
    BSObjCValue *_value;
    long long _offset;
    NSArray *_alternateNames;
}

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

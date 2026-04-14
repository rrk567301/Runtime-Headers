@class NSString, BSObjCValue, NSArray;

@interface BSObjCIvar : NSObject {
    struct objc_ivar { } *_ivar;
    NSString *_name;
    BSObjCValue *_value;
    long long _offset;
    NSArray *_alternateNames;
}

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end

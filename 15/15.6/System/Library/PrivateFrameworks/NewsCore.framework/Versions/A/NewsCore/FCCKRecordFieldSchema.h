@class NSString;

@interface FCCKRecordFieldSchema : NSObject {
    char _isEncrypted;
    int _type;
    NSString *_name;
}

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end

@class NSString;

@interface FCCKRecordFieldSchema : NSObject {
    BOOL _isEncrypted;
    int _type;
    NSString *_name;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end

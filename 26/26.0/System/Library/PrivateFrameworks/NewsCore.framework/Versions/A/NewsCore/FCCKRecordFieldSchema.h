@class NSString;

@interface FCCKRecordFieldSchema : NSObject {
    BOOL _isEncrypted;
    int _type;
    NSString *_name;
}

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

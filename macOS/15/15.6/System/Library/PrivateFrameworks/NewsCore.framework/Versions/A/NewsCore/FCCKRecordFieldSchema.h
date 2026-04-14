@class NSString;

@interface FCCKRecordFieldSchema : NSObject {
    BOOL _isEncrypted;
    int _type;
    NSString *_name;
}

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

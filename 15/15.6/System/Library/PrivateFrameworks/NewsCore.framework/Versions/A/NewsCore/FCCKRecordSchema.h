@class NSDictionary, NSString;

@interface FCCKRecordSchema : NSObject {
    NSDictionary *_fieldSchemasByName;
    NSString *_recordType;
}

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end

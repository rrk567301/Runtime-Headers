@class NSDictionary, NSString;

@interface FCCKRecordSchema : NSObject {
    NSDictionary *_fieldSchemasByName;
    NSString *_recordType;
}

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

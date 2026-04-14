@class NSDictionary, NSString;

@interface FCCKRecordSchema : NSObject {
    NSDictionary *_fieldSchemasByName;
    NSString *_recordType;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end

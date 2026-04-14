@class NSString;

@interface PHImportAssetNameDescription : NSObject {
    NSString *_filename;
    NSString *_uuid;
}

- (id)description;
- (id)redactedDescription;
- (void).cxx_destruct;
- (id)initWithFileName:(id)a0 uuid:(id)a1;

@end

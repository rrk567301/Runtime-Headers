@class NSString;

@interface PHImportAssetNameDescription : NSObject {
    NSString *_filename;
    NSString *_uuid;
}

- (void).cxx_destruct;
- (id)description;
- (id)redactedDescription;
- (id)initWithFileName:(id)a0 uuid:(id)a1;

@end

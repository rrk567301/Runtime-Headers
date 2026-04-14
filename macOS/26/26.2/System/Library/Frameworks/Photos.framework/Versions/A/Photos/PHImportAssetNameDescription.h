@class NSString;

@interface PHImportAssetNameDescription : NSObject {
    NSString *_filename;
    NSString *_uuid;
}

- (id)redactedDescription;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFileName:(id)a0 uuid:(id)a1;

@end

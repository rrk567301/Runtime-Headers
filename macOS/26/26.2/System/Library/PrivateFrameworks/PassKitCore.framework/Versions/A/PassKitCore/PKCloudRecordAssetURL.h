@class NSData;

@interface PKCloudRecordAssetURL : PKCloudRecordObject {
    int _fd;
    NSData *_data;
}

+ (BOOL)supportsSecureCoding;

- (long long)compare:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRecords:(id)a0;
- (void)dealloc;
- (id)_descriptionWithIncludeItem:(BOOL)a0;
- (id)assetData;
- (id)descriptionWithItem:(BOOL)a0;

@end

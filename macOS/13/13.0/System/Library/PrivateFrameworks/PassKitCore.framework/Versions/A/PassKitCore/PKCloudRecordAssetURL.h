@class NSData;

@interface PKCloudRecordAssetURL : PKCloudRecordObject {
    int _fd;
    NSData *_data;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithRecords:(id)a0;
- (id)descriptionWithItem:(BOOL)a0;
- (id)_descriptionWithIncludeItem:(BOOL)a0;
- (id)assetData;

@end

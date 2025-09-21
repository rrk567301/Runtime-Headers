@class NSSet, NSDictionary, NSObject;
@protocol PKCloudStoreCoding;

@interface PKCloudStoreUploadItemConfiguration : NSObject <NSSecureCoding> {
    unsigned long long _itemType;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSObject<PKCloudStoreCoding> *item;
@property (retain, nonatomic) NSSet *cloudStoreZones;
@property (copy, nonatomic) NSDictionary *recordSpecificKeys;
@property (nonatomic) unsigned long long codingType;
@property (nonatomic) char detectConflicts;
@property (nonatomic) char returnRecords;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithItem:(id)a0;
- (char)isEqualToConfiguration:(id)a0;
- (id)initWithItem:(id)a0 recordSpecificKeys:(id)a1;

@end

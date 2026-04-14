@class NSString, NSURL, NSData, NSNumber;

@interface CKPackageItem : NSObject

@property (retain, nonatomic) NSNumber *packageItemID;
@property (nonatomic) unsigned long long packageIndex;
@property (copy, nonatomic) NSURL *fileURL;
@property (copy) NSData *signature;
@property (nonatomic) unsigned long long size;
@property (nonatomic) long long paddedSize;
@property (copy, nonatomic) NSNumber *deviceID;
@property (copy, nonatomic) NSNumber *fileID;
@property (copy, nonatomic) NSNumber *generationID;
@property (copy, nonatomic) NSData *wrappedAssetKey;
@property (copy, nonatomic) NSString *itemTypeHint;
@property (nonatomic) unsigned long long itemID;
@property (nonatomic) NSNumber *sectionIndex;
@property (nonatomic) long long offset;

- (id)description;
- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithDeviceID:(id)a0 fileID:(id)a1 generationID:(id)a2;

@end

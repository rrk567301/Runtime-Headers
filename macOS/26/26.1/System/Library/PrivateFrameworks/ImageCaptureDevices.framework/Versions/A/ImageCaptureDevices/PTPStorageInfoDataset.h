@class NSMutableData, NSString;

@interface PTPStorageInfoDataset : NSObject {
    unsigned short _storageType;
    unsigned short _filesystemType;
    unsigned short _accessCapability;
    unsigned long long _maxCapacity;
    unsigned long long _freeSpaceInBytes;
    unsigned int _freeSpaceInImages;
    NSString *_storageDescription;
    NSString *_volumeLabel;
    NSMutableData *_content;
}

@property (retain, nonatomic) NSMutableData *content;
@property (copy, nonatomic) NSString *storageDescription;
@property (copy, nonatomic) NSString *volumeLabel;
@property (nonatomic) BOOL dirty;
@property (nonatomic) BOOL readOnlyObject;

- (void)setMaxCapacity:(unsigned long long)a0;
- (void)updateContent;
- (id)initWithData:(id)a0;
- (unsigned short)storageType;
- (void)setStorageType:(unsigned short)a0;
- (id)description;
- (unsigned long long)maxCapacity;
- (void).cxx_destruct;
- (id)init;
- (unsigned short)filesystemType;
- (void)setFilesystemType:(unsigned short)a0;
- (id)initWithMutableData:(id)a0;
- (unsigned short)accessCapability;
- (unsigned long long)freeSpaceInBytes;
- (unsigned int)freeSpaceInImages;
- (void)setAccessCapability:(unsigned short)a0;
- (void)setFreeSpaceInBytes:(unsigned long long)a0;
- (void)setFreeSpaceInImages:(unsigned int)a0;

@end

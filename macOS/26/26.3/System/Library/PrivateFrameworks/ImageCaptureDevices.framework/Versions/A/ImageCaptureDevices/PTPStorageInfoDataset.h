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

- (unsigned short)storageType;
- (void)updateContent;
- (id)initWithData:(id)a0;
- (id)description;
- (id)init;
- (void)setMaxCapacity:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setStorageType:(unsigned short)a0;
- (unsigned long long)maxCapacity;
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

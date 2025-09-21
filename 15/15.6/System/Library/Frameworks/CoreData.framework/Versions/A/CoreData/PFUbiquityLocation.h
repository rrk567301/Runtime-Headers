@class NSString, NSArray;

@interface PFUbiquityLocation : NSObject <NSCopying> {
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_ubiquityRootLocationPath;
    int _ubiquityLocationType;
    NSString *_exportingPeerID;
    NSString *_storeName;
    NSString *_modelVersionHash;
    NSString *_filename;
    NSArray *_otherPathComponents;
    char _isDirectory;
    char _isRootUbiquitous;
}

@property (readonly, nonatomic) unsigned long long hash;

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void)setStoreName:(id)a0;
- (void)setFilename:(id)a0;
- (char)isEqualToURL:(id)a0;
- (void)setExportingPeerID:(id)a0;
- (void)setHash:(unsigned long long)a0;
- (void)setIsRootUbiquitous:(char)a0;
- (void)setModelVersionHash:(id)a0;
- (void)setOtherPathComponents:(id)a0;
- (void)setUbiquityLocationType:(int)a0;
- (void)setUbiquityRootLocation:(id)a0;
- (void)setUbiquityRootLocationPath:(id)a0;

@end

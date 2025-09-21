@class NSString, NSMutableDictionary, NSDate, NSNumber;

@interface PHImportDuplicateInfo : NSObject

@property (retain, nonatomic) NSMutableDictionary *info;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSDate *imageDate;
@property (retain, nonatomic) NSDate *alternateImportImageDate;
@property (readonly, nonatomic) NSNumber *fileSize;
@property (readonly, nonatomic) char isInTrash;
@property (readonly, nonatomic) NSString *fingerprint;
@property (readonly, nonatomic) NSString *avchdFingerprint;
@property (readonly, nonatomic) double timezoneOffset;
@property (readonly, nonatomic) char hasVideoComplement;

- (id)description;
- (void).cxx_destruct;
- (char)isLegacy;
- (id)objectID;
- (id)initWithAssetInfo:(id)a0;
- (id)originatingAssetIdentifier;

@end

@class NSData, NSArray, CKRecordID, NSMutableDictionary, NSDictionary, CKRecord, CKShare, WBSCRDTPosition;

@interface WBBookmarkSyncData : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_generations;
    NSMutableDictionary *_auxiliaryRecords;
    NSDictionary *_extraPositionData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *encodedBookmarkSyncData;
@property (copy, nonatomic) CKRecord *record;
@property (nonatomic) long long state;
@property (retain, nonatomic) WBSCRDTPosition *position;
@property (nonatomic) unsigned long long minimumAPIVersion;
@property (copy, nonatomic) NSDictionary *positionDictionaryRepresentation;
@property (nonatomic) unsigned long long modifiedAttributeMask;
@property (copy, nonatomic) CKRecordID *parentRecordID;
@property (copy, nonatomic) CKShare *shareRecord;
@property (nonatomic) BOOL isDeletingRecordZone;
@property (readonly, copy, nonatomic) NSArray *auxiliaryRecordIDs;

+ (id)positionFromContentsOfData:(id)a0;
+ (id)syncDataWithContentsOfData:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)clearAllCKRecords;
- (id)auxiliaryRecordForKey:(id)a0;
- (void)setAuxiliaryRecord:(id)a0 forKey:(id)a1;
- (BOOL)hasGenerationForKey:(id)a0;
- (id)generationForKey:(id)a0;
- (void)setGeneration:(id)a0 forKey:(id)a1;
- (void)incrementGenerationForKey:(id)a0 withDeviceIdentifier:(id)a1;
- (void)clearAllGenerationsExceptState;

@end

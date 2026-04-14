@class NSMutableDictionary, NSDictionary, NSData, WBSCRDTPosition, CKRecord;

@interface WBBookmarkSyncData : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_generations;
    NSDictionary *_extraPositionData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *encodedBookmarkSyncData;
@property (retain, nonatomic) CKRecord *record;
@property (nonatomic) long long state;
@property (retain, nonatomic) WBSCRDTPosition *position;
@property (nonatomic) unsigned long long minimumAPIVersion;
@property (copy, nonatomic) NSDictionary *positionDictionaryRepresentation;
@property (nonatomic) unsigned long long modifiedAttributeMask;

+ (id)syncDataWithContentsOfData:(id)a0;
+ (id)positionFromContentsOfData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)generationForKey:(id)a0;
- (BOOL)hasGenerationForKey:(id)a0;
- (void)setGeneration:(id)a0 forKey:(id)a1;
- (void)incrementGenerationForKey:(id)a0 withDeviceIdentifier:(id)a1;
- (void)clearAllGenerationsExceptState;

@end

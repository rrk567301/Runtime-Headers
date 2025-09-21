@class NSString, NSDictionary, NSData, NSDate;

@interface PFAssetAdjustments : NSObject <NSCopying> {
    NSDate *_adjustmentTimestamp;
}

@property (readonly, copy, nonatomic) NSString *adjustmentFormatIdentifier;
@property (readonly, copy, nonatomic) NSString *adjustmentFormatVersion;
@property (readonly, nonatomic) NSData *adjustmentData;
@property (readonly, copy, nonatomic) NSString *editorBundleID;
@property (readonly, nonatomic) long long adjustmentBaseVersion;
@property (readonly, nonatomic) unsigned int adjustmentRenderTypes;
@property (nonatomic) NSDate *adjustmentTimestamp;
@property (retain, nonatomic) NSDictionary *propertyListDictionary;

+ (char)adjustmentsPropertyListFileRequiresOverflowDataReassemblyAtURL:(id)a0 predictedSize:(long long *)a1;
+ (char)writeReassembleAdjustmentsPropertyListAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (id)fingerprintWithAssetAdjustmentFingerprintData:(id)a0;
+ (id)fingerPrintForData:(id)a0 error:(id *)a1;
+ (id)fingerPrintForFileDescriptor:(int)a0 error:(id *)a1;
+ (id)dataForOverflowDataReassembledAdjustmentsPropertyListAtURL:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (char)writeToURL:(id)a0 atomically:(char)a1;
- (id)initWithPropertyListDictionary:(id)a0;
- (id)initWithFormatIdentifier:(id)a0 formatVersion:(id)a1 data:(id)a2 baseVersion:(long long)a3 editorBundleID:(id)a4 renderTypes:(unsigned int)a5;
- (id)_deserializedPhotosAdjustmentDataWithError:(id *)a0;
- (id)deserializedAdjustmentDataWithError:(id *)a0;
- (id)initWithFormatIdentifier:(id)a0 formatVersion:(id)a1 data:(id)a2 baseVersion:(long long)a3;
- (id)initWithFormatIdentifier:(id)a0 formatVersion:(id)a1 data:(id)a2 baseVersion:(long long)a3 editorBundleID:(id)a4;

@end

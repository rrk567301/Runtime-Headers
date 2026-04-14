@class NSString, UTType, NSDate;

@interface PHAssetResourceCreationOptions : NSObject <NSCopying>

@property (retain, nonatomic) NSDate *alternateImportImageDate;
@property (nonatomic) BOOL shouldIngestInPlace;
@property (nonatomic) int burstPickType;
@property (retain, nonatomic) NSString *forcePairingIdentifier;
@property (copy, nonatomic) NSString *originalFilename;
@property (copy, nonatomic) UTType *contentType;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;
@property (nonatomic) BOOL shouldMoveFile;

- (id)propertyListRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithPropertyListRepresentation:(id)a0;
- (BOOL)ensureOptionsAreCompleteForURL:(id)a0;

@end

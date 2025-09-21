@class NSString, NSDate;

@interface PHAssetResourceCreationOptions : NSObject <NSCopying>

@property (retain, nonatomic) NSDate *alternateImportImageDate;
@property (nonatomic) char shouldIngestInPlace;
@property (nonatomic) int burstPickType;
@property (retain, nonatomic) NSString *forcePairingIdentifier;
@property (copy, nonatomic) NSString *originalFilename;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;
@property (nonatomic) char shouldMoveFile;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithPropertyListRepresentation:(id)a0;
- (id)propertyListRepresentation;
- (char)ensureOptionsAreCompleteForURL:(id)a0;

@end

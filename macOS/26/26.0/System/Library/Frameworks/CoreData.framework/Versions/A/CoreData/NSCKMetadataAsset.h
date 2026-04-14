@class NSData;

@interface NSCKMetadataAsset : NSManagedObject

@property (retain, nonatomic) NSData *binaryData;
@property (retain, nonatomic) NSData *externalBinaryData;

- (BOOL)validateForUpdate:(id *)a0;
- (BOOL)validateForInsert:(id *)a0;
- (BOOL)_validate:(id *)a0;

@end

@class NSData;

@interface NSCKMetadataAsset : NSManagedObject

@property (retain, nonatomic) NSData *binaryData;
@property (retain, nonatomic) NSData *externalBinaryData;

- (BOOL)validateForInsert:(id *)a0;
- (BOOL)validateForUpdate:(id *)a0;

@end

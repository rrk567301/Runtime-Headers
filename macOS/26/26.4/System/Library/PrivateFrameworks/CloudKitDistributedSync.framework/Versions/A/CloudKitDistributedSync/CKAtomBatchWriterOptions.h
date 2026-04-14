@class NSURL, NSDictionary;

@interface CKAtomBatchWriterOptions : NSObject

@property (nonatomic) unsigned char formatVersion;
@property (nonatomic) BOOL fileBacked;
@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSDictionary *underlyingWriterOptionsByClass;

- (void).cxx_destruct;
- (id)init;

@end

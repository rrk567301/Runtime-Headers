@class NSArray, NSURL, NSDictionary;

@interface WBSReaderAvailabilityCheckResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isReaderAvailable) BOOL readerAvailable;
@property (nonatomic) BOOL isSameDocumentNavigation;
@property (copy, nonatomic) NSArray *textSamples;
@property (nonatomic) BOOL doesPageUseSearchEngineOptimizationMetadata;
@property (copy, nonatomic) NSURL *canonicalURL;
@property (readonly, nonatomic) NSDictionary *combinedMetadataForTests;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

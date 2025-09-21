@class NSArray, NSURL, NSDictionary;

@interface WBSReaderAvailabilityCheckResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isReaderAvailable) char readerAvailable;
@property (nonatomic) char isSameDocumentNavigation;
@property (copy, nonatomic) NSArray *textSamples;
@property (nonatomic) char doesPageUseSearchEngineOptimizationMetadata;
@property (copy, nonatomic) NSURL *canonicalURL;
@property (readonly, nonatomic) NSDictionary *combinedMetadataForTests;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

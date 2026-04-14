@class NSString;

@interface DocumentUnderstanding.DUStructuredExtractionLabel : NSObject <NSCoding, NSCopying> {
    void /* function */ labelName;
}

@property (nonatomic, copy) NSString *labelName;
@property (nonatomic) double confidenceScore;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (id)init;

@end

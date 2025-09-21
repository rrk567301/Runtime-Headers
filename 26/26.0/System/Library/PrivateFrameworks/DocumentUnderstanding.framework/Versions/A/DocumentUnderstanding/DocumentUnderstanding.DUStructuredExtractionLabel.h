@class NSString;

@interface DocumentUnderstanding.DUStructuredExtractionLabel : NSObject <NSCoding, NSCopying> {
    void /* function */ labelName;
}

@property (nonatomic, copy) NSString *labelName;
@property (nonatomic) double confidenceScore;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

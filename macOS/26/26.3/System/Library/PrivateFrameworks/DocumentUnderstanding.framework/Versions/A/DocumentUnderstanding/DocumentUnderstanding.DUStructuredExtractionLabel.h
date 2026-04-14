@class NSString;

@interface DocumentUnderstanding.DUStructuredExtractionLabel : NSObject <NSCoding, NSCopying> {
    void /* function */ labelName;
}

@property (nonatomic, copy) NSString *labelName;
@property (nonatomic) double confidenceScore;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;

@end

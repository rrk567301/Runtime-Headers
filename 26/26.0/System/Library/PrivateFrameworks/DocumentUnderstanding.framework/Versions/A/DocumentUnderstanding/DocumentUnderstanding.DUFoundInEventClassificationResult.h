@class NSNumber;

@interface DocumentUnderstanding.DUFoundInEventClassificationResult : NSObject <NSCoding, NSCopying>

@property (nonatomic, retain) NSNumber *isSupportedLocale;
@property (nonatomic, retain) NSNumber *containsDataDetectors;
@property (nonatomic, retain) NSNumber *isClassifiedAsEvent;
@property (nonatomic, retain) NSNumber *textLengthPass;
@property (nonatomic, retain) NSNumber *isEventCandidate;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)serializedData;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

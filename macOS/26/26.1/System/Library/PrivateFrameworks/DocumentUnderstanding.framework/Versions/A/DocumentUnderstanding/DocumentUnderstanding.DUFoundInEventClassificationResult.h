@class NSNumber;

@interface DocumentUnderstanding.DUFoundInEventClassificationResult : NSObject <NSCoding, NSCopying>

@property (nonatomic, retain) NSNumber *isSupportedLocale;
@property (nonatomic, retain) NSNumber *containsDataDetectors;
@property (nonatomic, retain) NSNumber *isClassifiedAsEvent;
@property (nonatomic, retain) NSNumber *textLengthPass;
@property (nonatomic, retain) NSNumber *isEventCandidate;

- (id)serializedData;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (id)init;

@end

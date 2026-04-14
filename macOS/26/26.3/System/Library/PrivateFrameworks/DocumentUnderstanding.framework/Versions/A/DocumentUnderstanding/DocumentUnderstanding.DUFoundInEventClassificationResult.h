@class NSNumber;

@interface DocumentUnderstanding.DUFoundInEventClassificationResult : NSObject <NSCoding, NSCopying>

@property (nonatomic, retain) NSNumber *isSupportedLocale;
@property (nonatomic, retain) NSNumber *containsDataDetectors;
@property (nonatomic, retain) NSNumber *isClassifiedAsEvent;
@property (nonatomic, retain) NSNumber *textLengthPass;
@property (nonatomic, retain) NSNumber *isEventCandidate;

- (id)init;
- (id)serializedData;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;

@end

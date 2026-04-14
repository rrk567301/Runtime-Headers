@class NSNumber, NSString;

@interface DocumentUnderstanding.DUFoundInEventClassificationResult : NSObject <NSCoding, NSCopying> {
    void /* function */ documentLanguage;
}

@property (nonatomic, retain) NSNumber *isSupportedLocale;
@property (nonatomic, retain) NSNumber *containsDataDetectors;
@property (nonatomic, retain) NSNumber *isClassifiedAsEvent;
@property (nonatomic, retain) NSNumber *textLengthPass;
@property (nonatomic, retain) NSNumber *isEventCandidate;
@property (nonatomic, copy) NSString *documentLanguage;

- (id)serializedData;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end

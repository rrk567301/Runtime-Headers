@class NSURL, NSString, NSDate;

@interface SSREnrollmentUtterance : NSObject

@property (readonly, nonatomic) NSURL *enrollmentUtteranceUrl;
@property (readonly, nonatomic) BOOL isExplicit;
@property (readonly, nonatomic) unsigned long long triggerPhrase;
@property (readonly, nonatomic) NSDate *approximateGenerationDate;
@property (readonly, nonatomic) NSString *productVersion;
@property (readonly, nonatomic) NSString *productType;

- (void).cxx_destruct;
- (id)description;
- (id)initWithEnrollmentUtteranceUrl:(id)a0;
- (void)parseMetadataFromDictionary:(id)a0;

@end

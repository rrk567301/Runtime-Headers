@class NSString;

@interface PKDocumentRequest : NSObject

@property (nonatomic) unsigned long long documentType;
@property (copy, nonatomic) NSString *countryCode;
@property (nonatomic) double preferredWidth;

- (void).cxx_destruct;

@end
